/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:27:04 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/27 18:27:07 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
// Checks if placing a number in the given position is valid.
// In the first loop, checks the row for conflicts, and in the second one,
// it checks if the columns has any conflicts. A conflict is 
// when a number already exists in the given row or column.
// - matrix: The 6x6 matrix where the number will be placed.
// - row, col: The position where the number will be placed.
// - num: The number to be placed in the matrix.
int	is_valid(int matrix[6][6], int row, int col, int num)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (matrix[row][i] == num)
			return (0);
		i++;
	}
	i = 1;
	while (i <= 4)
	{
		if (matrix[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

// This function checks if the given row is completelly filled
// and if it finds a 0 number inside it means that the row  
// it's incomplete so it returns 0.
int	is_row_complete(int matrix[6][6], int row)
{
	int	col;

	col = 1;
	while (col <= 4)
	{
		if (matrix[row][col] == 0)
			return (0);
		col++;
	}
	return (1);
}

// This function checks if the given column is completelly filled
// and if it finds a 0 number inside it means that the column  
// it's incomplete so it returns 0.
int	is_col_complete(int matrix[6][6], int col)
{
	int	row;

	row = 1;
	while (row <= 4)
	{
		if (matrix[row][col] == 0)
			return (0);
		row++;
	}
	return (1);
}

// This function checks if the row constraints are satisfied for the given row
// It compares the numbers that are visible from both sides of the row, by
// calling the count_visible_from_left count_visible_from_right functions 
// from views file.
int	check_row_constraints(int matrix[6][6], int row)
{
	if (count_visible_from_left(matrix, row) != matrix[row][0])
		return (0);
	if (count_visible_from_right(matrix, row) != matrix[row][5])
		return (0);
	return (1);
}

// Similar to the previous one, this function checks if the column constraints
// are satisfied for the given columns, by calling the 
// count_visible_from_bottom count_visible_from_top functions 
// from views file.
int	check_col_constraints(int matrix[6][6], int col)
{
	if (count_visible_from_top(matrix, col) != matrix[0][col])
		return (0);
	if (count_visible_from_bottom(matrix, col) != matrix[5][col])
		return (0);
	return (1);
}
