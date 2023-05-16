/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:11:28 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/16 09:57:54 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int		i;
	char	*str;

	str = "Hello World!";
	i = ft_strlen(str);
	ft_putnbr(i);
	write(1, "\n", 1);
	return (0);
}
