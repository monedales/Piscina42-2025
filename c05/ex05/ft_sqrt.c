/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 22:26:39 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/08 13:50:24 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("Square Root of 12: %d\n", ft_sqrt(144));
// 	printf("Square Root of -13: %d\n", ft_sqrt(-13));
// 	printf("Square Root of 4: %d\n", ft_sqrt(4));
// 	printf("Square Root of 36: %d\n", ft_sqrt(36));
// 	printf("Square Root of 69: %d\n", ft_sqrt(69));
// 	printf("Square Root of 25: %d\n", ft_sqrt(25));
// }
