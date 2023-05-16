/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:05:37 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/13 13:07:08 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;
	char	c;

	a = 10;
	b = 6;
	ft_div_mod(a, b, &div, &mod);
	c = div + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = mod + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
