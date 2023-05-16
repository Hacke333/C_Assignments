/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:53:55 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/17 01:34:28 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_pow(int a, int b)
{
	int	temp;

	temp = 1;
	while (b > 0)
	{
		temp *= a;
		b--;
	}
	return (temp);
}

void	ft_putndigitnbr(int n, int nbr)
{
	int		digit;
	int		temp;
	char	c;

	digit = 0;
	temp = nbr;
	while (temp > 0)
	{
		temp /= 10;
		digit++;
	}
	temp = 0;
	while (temp < n - digit)
	{
		write(1, "0", 1);
		temp++;
	}
	while (digit > 0)
	{
		c = nbr / ft_pow(10, digit - 1) + '0';
		write(1, &c, 1);
		nbr %= ft_pow(10, digit - 1);
		digit--;
	}
}

int	is_comb(int n, int nbr)
{
	int	i;
	int	digit;

	i = 0;
	digit = nbr % 10;
	while (i < n)
	{
		nbr /= 10;
		if (digit <= nbr % 10)
			return (0);
		digit = nbr % 10;
		if (nbr == 0)
			break ;
		i++;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	while (i < ft_pow(10, n))
	{
		if (is_comb(n, i))
		{
			ft_putndigitnbr(n, i);
			write(1, ", ", 2);
		}
		i++;
	}
}

int	main(void)
{
	ft_print_combn(3);
	write(1, "\n", 1);
	return (0);
}
