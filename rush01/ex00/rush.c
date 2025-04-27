/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:26:33 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/27 18:26:40 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// Tries to place a number in the matrix at a specific position and 
// checks if the move is valid. If the row or column is complete 
// and constraints are violated, the number position is reset, and the 
// function returns false. 
/* When: else if (solve_matrix(matrix, row, col + 1)) */
// meaning that no constraint are violated and if the number is valid, 
// it goes to the next position and recursively tries to solve the matrix, 
// by calling the solve_matrix function again.
/* When: "matrix[row][col] = 0;" */
// if NO SOLUTION is found in the recursive call,
// it resets the current position(backtracks) and returns false.
int	solve_try_number(int matrix[6][6], int row, int col, int num)
{
	matrix[row][col] = num;
	if (is_row_complete(matrix, row) && !check_row_constraints(matrix, row))
		matrix[row][col] = 0;
	else if (is_col_complete(matrix, col)
		&& !check_col_constraints(matrix, col))
		matrix[row][col] = 0;
	else if (solve_matrix(matrix, row, col + 1))
		return (1);
	matrix[row][col] = 0;
	return (0);
}

// This function uses recursion and backtracking to solve the matrix.
// It tries all possible numbers between 1 to 4 in each position.
/* When: if (row ==5) */
// It starts checking from number 1, if the row index is 5 (the last row), 
// it checks if all clues are satisfied by calling the check_clues function. 
// If all clues are satisfied, it returns true.
/* When: if (col ==5) */
// Then it goes to the second condition and when it reachs the end of a column,
// it calls itself again with row + 1 and reset the column index to 1.
/* When: if (matrix[row][col] != 0): */
// It skips filled cells and move to the next one by calling itself 1 more time.
/* When: while (num <= 4) */
// Then, a loop begins to place all the numbers from 1 to 4 in the current
// empty cell. For each number, it checks if the number is valid using the
// is_valid function and then calls the solve_try_number function above
// to ensure if all the constraints are still met, if not, it backtracks and
// tries a different number.
int	solve_matrix(int matrix[6][6], int row, int col)
{
	int	num;

	num = 1;
	if (row == 5)
		return (check_clues(matrix));
	if (col == 5)
		return (solve_matrix(matrix, row + 1, 1));
	if (matrix[row][col] != 0)
		return (solve_matrix(matrix, row, col + 1));
	while (num <= 4)
	{
		if (is_valid(matrix, row, col, num))
		{
			if (solve_try_number(matrix, row, col, num))
				return (1);
		}
		num++;
	}
	return (0);
}
