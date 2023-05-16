/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:01:58 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/13 13:04:23 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int	main(void)
{
	int		a;
	int		b;
	char	c;

	a = 10;
	b = 6;
	ft_ultimate_div_mod(&a, &b);
	c = a + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = b + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
