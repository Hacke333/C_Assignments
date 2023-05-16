/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacker333 <hacker333>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:34:39 by hacker333         #+#    #+#             */
/*   Updated: 2023/05/13 13:41:34 by hacker333        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	partition(int *tab, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = tab[high];
	i = low - 1;
	j = low;
	while (j <= high - 1)
	{
		if (tab[j] < pivot)
		{
			i++;
			ft_swap(&tab[i], &tab[j]);
		}
		j++;
	}
	ft_swap(&tab[i + 1], &tab[high]);
	return (i + 1);
}

void	quick_sort(int *tab, int low, int high)
{
	int	i;

	if (low < high)
	{
		i = partition(tab, low, high);
		quick_sort(tab, low, i - 1);
		quick_sort(tab, i + 1, high);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	quick_sort(tab, 0, size - 1);
}

int	main(void)
{
	int		tab[5];
	int		i;
	char	c;

	tab[0] = 5;
	tab[1] = 4;
	tab[2] = 3;
	tab[3] = 2;
	tab[4] = 1;
	i = 0;
	ft_sort_int_tab(tab, 5);
	while (i < 5)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
