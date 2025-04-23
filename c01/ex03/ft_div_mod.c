/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:37:07 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/22 16:37:11 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);

}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	dv;
// 	int	md;

// 	x = 13;
// 	y = 3;

// 	ft_div_mod(x, y, &dv, &md);
// 	printf("Division: %d, Modulus: %d\n", dv, md);

// 	return (0);
// }
