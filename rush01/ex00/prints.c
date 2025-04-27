/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:26:20 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/27 18:26:23 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Writes the error message "Error\n"
void	ft_error(void)
{
	write(1, "Error\n", 6);
}

// Prints the inner 4x4 part of the matrix (ignores the clues at the borders).
// - matrix: the 6x6 game matrix (including clues and game area).
// - row: used to iterate over the rows of the matrix.
// - col: used to iterate over the columns of the matrix.
void	print_matrix(int matrix[6][6])
{
	int	row;
	int	col;

	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			if (col == 4)
			{
				ft_putchar(matrix[row][col] + '0');
			}
			else
			{
				ft_putchar(matrix[row][col] + '0');
				ft_putchar(' ');
			}
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
