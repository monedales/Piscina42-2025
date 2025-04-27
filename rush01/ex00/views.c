/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:29:50 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/27 18:29:53 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*Each of these functions operates by comparing the current number
 to the tallest number seen so far. If the current number is 
 taller, it is considered "visible" and added to the count.*/

// This function is responsible for counting the visible numbers
// from the top of the column based on the numbers already placed in the matrix
// It compares each number in the column (from row 1 to 4) with 
// the maximum number seen so far (max_height). 
// If the number is taller than max_height, it's considered visible, 
// and the count is incremented.
// A number is considered visible if it is taller than any
// number that has been placed before it in the same column.
// The function starts at the second row(row = 1) and goes down 
// to the fourth row (because row 0 and row 5 are the borders).
int	count_visible_from_top(int matrix[6][6], int col)
{
	int	max_height;
	int	count;
	int	row;

	max_height = 0;
	count = 0;
	row = 1;
	while (row <= 4)
	{
		if (matrix[row][col] > max_height)
		{
			max_height = matrix[row][col];
			count++;
		}
		row++;
	}
	return (count);
}

// Similar to the previous function, but it counts visible numbers
// starting from the bottom of the column and moving upwards. 
// It starts at row 4 and checks until row 1.
int	count_visible_from_bottom(int matrix[6][6], int col)
{
	int	max_height;
	int	count;
	int	row;

	max_height = 0;
	count = 0;
	row = 4;
	while (row >= 1)
	{
		if (matrix[row][col] > max_height)
		{
			max_height = matrix[row][col];
			count++;
		}
		row--;
	}
	return (count);
}

// Similar, counts from the left side of a row.
// It compares each number from column 1 to 4 with the maximum 
// number seen so far in that row. If the number is taller, 
// it is visible and the counter increases.
int	count_visible_from_left(int matrix[6][6], int row)
{
	int	max_height;
	int	count;
	int	col;

	max_height = 0;
	count = 0;
	col = 1;
	while (col <= 4)
	{
		if (matrix[row][col] > max_height)
		{
			max_height = matrix[row][col];
			count++;
		}
		col++;
	}
	return (count);
}

// Similar, counts from the right side of a row.
// It compares each number from column 1 to 4 with the maximum 
// number seen so far in that row. If the number is taller, 
// it is visible and the counter increases.
int	count_visible_from_right(int matrix[6][6], int row)
{
	int	max_height;
	int	count;
	int	col;

	max_height = 0;
	count = 0;
	col = 4;
	while (col >= 1)
	{
		if (matrix[row][col] > max_height)
		{
			max_height = matrix[row][col];
			count++;
		}
		col--;
	}
	return (count);
}

// This functions calls all other functions above in a loop through 
// rows and columns from 1 to 4 to see if the numbers 
// matches the clues on the borders
int	check_clues(int matrix[6][6])
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (count_visible_from_top(matrix, i) != matrix[0][i])
			return (0);
		if (count_visible_from_bottom(matrix, i) != matrix[5][i])
			return (0);
		if (count_visible_from_left(matrix, i) != matrix[i][0])
			return (0);
		if (count_visible_from_right(matrix, i) != matrix[i][5])
			return (0);
		i++;
	}
	return (1);
}
