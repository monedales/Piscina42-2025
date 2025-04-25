/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:02:52 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/20 18:02:58 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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

void	ft_error(void)
{
	char	*error;

	error = "Invalid argument!\nPlease input a valid INT number!\n";
	ft_string(error);
}

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
	ft_line(x, 'o', '-', 'o');
	count = 2;
	while (count < y)
	{
		ft_line(x, '|', ' ', '|');
		count++;
	}
	if (y > 1)
	{
		ft_line(x, 'o', '-', 'o');
	}
}