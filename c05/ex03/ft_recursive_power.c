/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 21:52:42 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/07 18:21:28 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("number^power is: %d\n", ft_recursive_power(2, 3));
// 	printf("number^power is: %d\n", ft_recursive_power(-2, 3));
// 	printf("number^power is: %d\n", ft_recursive_power(2, 0));
// 	printf("number^power is: %d\n", ft_recursive_power(0, 0));
// 	printf("number^power is: %d\n", ft_recursive_power(2, -1));
// 	return (0);
// }