/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:18:01 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/23 17:19:09 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temporary;

	size = size - 1;
	count = 0;
	while (count <= size)
	{
		temporary = tab[count];
		tab[count] = tab[size];
		tab[size] = temporary;
		count++;
		size--;
	}

}

// int	main(void)
// {
// 	int	size;
// 	int	count;
// 	int	count2;
// 	int	tab[] = {8, 7, 1, 5, 6, 3};

// 	size = 6;
// 	count = 0;
// 	count2 = 0;
// 	printf("Array atual: %d\n ", tab[count]);
// 	while (count < size)
// 	{
// 		printf("%d ", tab[count]);
// 		count++;
// 	}
// 	ft_rev_int_tab(tab, size);
// 	printf("\nArray depois da função: %d \n", tab[count2]);
// 	while (count2 < size)
// 	{
// 		printf("%d ", tab[count2]);
// 		count2++;
// 	}
// }
