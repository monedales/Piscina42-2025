/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 21:20:49 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/22 21:35:23 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count2;
	int	temporary;

	count = 0;

	while (count < size)
	{
		count2 = 0;
		while (count2 < size)
		{
			if(tab[count] <= tab[count2])
			{
				temporary = tab[count];
				tab[count] = tab[count2];
				tab[count2] = temporary;
			}
			count2++;
		}
		count++;
	}
}

int	main(void)
{
	int	tab[5] = {8, 7, 5, 3, 1};
	int	size = 5;
	int count;
	int	count2;

	count = 0;
	count2 = 0;

	while (count < size)
	{
		printf("Array atual: %d\n ", tab[count]);
		count++;
	}

	ft_sort_int_tab(tab, size);
	while (count2 < size)
	{
		printf("Array depois da função: %d \n", tab[count2]);
		count2++;
	}
}

