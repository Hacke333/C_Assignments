/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:54:29 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/13 14:01:21 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z') && !('a' <= str[i]
				&& str[i] <= 'z') && str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str;
	int		i;
	char	c;

	str = "Hello World!";
	i = ft_str_is_alpha(str);
	c = i + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	str = "Hello World";
	i = ft_str_is_alpha(str);
	c = i + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
