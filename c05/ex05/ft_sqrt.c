/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 22:26:39 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/07 23:07:09 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0) //4
		return (0);
	while (result * result <= nb) // 1 * 1 <= 4 ; 2 * 2 = 4
	{
		if (result * result == nb) // 2 * 2 = 4 entao retorna 4
			return (result);
		result++;
	}
	return (0);
}
int	main(void)
{
	printf("Square Root of 0: %d\n", ft_sqrt(0));
	printf("Square Root of -13: %d\n", ft_sqrt(-13));
	printf("Square Root of 4: %d\n", ft_sqrt(4));
	printf("Square Root of 69: %d\n", ft_sqrt(69));
	printf("Square Root of 24: %d\n", ft_sqrt(24));
}
