/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:58:10 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/17 20:48:22 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);
void	ft_print_numbers(int n1, int n2, int n3);

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 <= 7)
	{
		n2 = n1 + 1;
		while (n2 <= 8)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				ft_print_numbers(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

void	ft_print_numbers(int n1, int n2, int n3)
{
	ft_putchar(n1 + '0');
	ft_putchar(n2 + '0');
	ft_putchar(n3 + '0');
	if (!(n1 == 7 && n2 == 8 && n3 == 9))
	{
		write (1, ", ", 2);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
