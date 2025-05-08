/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:52:22 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/07 18:09:40 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("number^power is: %d\n", ft_iterative_power(0, -1));
// 	printf("number^power is: %d\n", ft_iterative_power(-2, 3));
// 	printf("number^power is: %d\n", ft_iterative_power(2, 0));
// 	printf("number^power is: %d\n", ft_iterative_power(0, 0));
// 	return (0);
// }