/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:38:23 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/17 20:36:42 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	char	c;

	c = 'o';
	ft_putchar (c);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
