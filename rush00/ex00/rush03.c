/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 21:02:01 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/20 21:02:10 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_error(void);

// This function creates a horizontal line with specific characters.
// cornerL: the character 'A' on the left side
// cornerR: the character 'C' on the right side
// middle: the character 'B' on the top/bottom/lef/right borders
// We subtract 2 from the line parameter to calculate 'size' because 
// we need to account for the left and right corner characters.
// For example, if line=5, then size=3, meaning we need to print: 
// cornerL + 3 middle chars + cornerR (total of 5 chars).
// The loop iterates 'size' times to print the middle characters:
// - For line=5: count=0 prints 1st B, count=1 prints 2nd B, 
// count=2 prints 3rd B, then loop ends
// - For line=3: countl=0 prints 1st B, 
// then loop ends (only one middle character)
// - For line=1: size would be -1, 
// so the loop doesn't execute (only cornerL is printed)
// Print left corner character while (count < size)
void	ft_line(int line, char cornerL, char middle, char cornerR)
{
	int	count;
	int	size;

	count = 0;
	size = line - 2;
	ft_putchar(cornerL);
	while (count < size)
	{
		ft_putchar(middle);
		count++;
	}
	if (line > 1)
	{
		ft_putchar(cornerR);
	}
	ft_putchar('\n');
}

// This function draws a rectangular pattern based
// on the provided width x and height y.
// It uses the ft_line function to create each row.
// The x parameter represents the width of the pattern.
// The y parameter represents the height of the pattern.
// The function first validates that the dimensions are
// within acceptable limits (between 1 and max_x/max_y).
// After drawing the top border, it uses a loop
// to draw all the middle rows (if any).
// The loop starts with count=2 because we already printed row 1,
// and we want to print rows 2 to y-1.
// For example, with y=4:
// - First call: Print top border (count doesn't matter yet)
// - Loop: count=2, print middle row, increment count to 3
// - Loop: count=3, print middle row, increment count to 4
// - Loop ends (count not < y)
// - If the height is more than 1, print bottom border (since y > 1)
// This creates a rectangle with corners 'A', top/bottom middles 'B',
//  sides 'B', and spaces in the center.
void	rush(int x, int y)
{
	int	max_x;
	int	max_y;
	int	count;

	max_x = 2147483647;
	max_y = 2147483647;
	if (x <= 0 || y <= 0 || x > max_x || y > max_y)
	{
		ft_error();
		return ;
	}
	ft_line(x, 'A', 'B', 'C');
	count = 2;
	while (count < y)
	{
		ft_line(x, 'B', ' ', 'B');
		count++;
	}
	if (y > 1)
	{
		ft_line(x, 'A', 'B', 'C');
	}
}

// This function receives a pointer to a string(an array of chars).
// A counter is declared to be used as an index in the loop
// with the purpose to print each letter from a string.
// The '\0' char is the end of a string in C.
// The loop continues as long it doesn't find a null char(\0)
// The middle parameter in the write function is the address
// from the actual char of the string
void	ft_string(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

// This function is used to print an error message to the user
// It starts with the declaration of a pointer error with type char
// and it is assigned an error message to this variable error
// The function ft_string it's called and it begins
// the iteration to each position of the array
// Iteration 1: str[0] = 'I';
// Iteration 2: str[1] = 'n';
// Iteration 3: str[2] = 'v'
// and it goes until the char '\0' end the loop.
void	ft_error(void)
{
	char	*error;

	error = "Invalid argument!\nPlease input a valid INT number!\n";
	ft_string(error);
}
