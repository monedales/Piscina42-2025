/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:59:44 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/22 19:00:46 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a / *b);
	mod = (*a % *b);

	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 12;
// 	b = 5;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("div: %d, mod: %d\n", a, b);
// 	return (0);
// }
