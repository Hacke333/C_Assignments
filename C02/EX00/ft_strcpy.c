/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:44:04 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/13 13:55:20 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int	main(void)
{
	char	*src;
	char	dest[12];

	src = "Hello World!";
	ft_strcpy(dest, src);
	write(1, dest, 12);
	write(1, "\n", 1);
	return (0);
}
