/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 22:30:01 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/04 22:30:07 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	print_number(char *number, struct s_dict_entry *dict, int dict_size)
{
	char	*value;

	value = search_dict(dict, dict_size, number);
	if (value)
	{
		while (*value)
			write(1, value++, 1);
	}
}

void	print_tens(char *str, struct s_dict_entry *dict, int dict_size)
{
	char	tens[3];
	char	ones[2];

	tens[0] = str[0];
	tens[1] = '0';
	tens[2] = '\0';
	ones[0] = str[1];
	ones[1] = '\0';
	if (str[0] == '1')
	{
		print_number(str, dict, dict_size);
		write(1, " ", 1);
		return ;
	}
	print_number(tens, dict, dict_size);
	if (str[1] != '0')
	{
		write(1, " ", 1);
		print_number(ones, dict, dict_size);
	}
	write(1, "\n", 1);
}

void	print_hundreds(char *str, struct s_dict_entry *dict, int dict_size)
{
	char	hundreds[2];

	hundreds[0] = str[0];
	hundreds[1] = '\0';
	if (str[0] != '0')
	{
		print_number(hundreds, dict, dict_size);
		write(1, " ", 1);
		print_number("100", dict, dict_size);
		if (str[1] != '0' || str[2] != '0')
			write(1, " ", 1);
	}
	if (str[1] != '0' || str[2] != '0')
		print_tens(&str[1], dict, dict_size);
	else
		write(1, "\n", 1);
}

void	print_lrg_nbr(char *num_str, struct s_dict_entry *dict, int dict_size)
{
	char	blocks[15][4];
	char	*suffixes[15];
	int		num_blocks;
	int		i;
	int		is_first;

	init_suffixes(suffixes);
	num_blocks = extract_blocks(num_str, blocks);
	i = num_blocks - 1;
	is_first = 1;
	while (i >= 0)
	{
		if (blocks[i][0] != '\0' && !(blocks[i][0] == '0'
			&& blocks[i][1] == '0' && blocks[i][2] == '0'))
		{
			if (!is_first)
				write(1, " ", 1);
			print_nbr_word(blocks[i], dict, dict_size);
			if (suffixes[i][0] != '\0')
			{
				write(1, " ", 1);
				write(1, suffixes[i], ft_strlen(suffixes[i]));
			}
			is_first = 0;
		}
		i--;
	}
	write(1, "\n", 1);
}

int	extract_blocks(char *num_str, char blocks[15][4])
{
	int	len;
	int	block_index;
	int	i;
	int	start;
	int	k;
	int	size;

	len = ft_strlen(num_str);
	block_index = 0;
	i = len;
	while (block_index < 15)
	{
		k = 0;
		while (k < 4)
			blocks[block_index][k++] = '\0';
		block_index++;
	}
	block_index = 0;
	while (i > 0)
	{
		if (i - 3 >= 0)
			start = i - 3;
		else
			start = 0;
		size = i - start;
		k = 0;
		while (k < size)
		{
			blocks[block_index][k] = num_str[start + k];
			k++;
		}
		blocks[block_index][k] = '\0';
		i -= 3;
		block_index++;
	}
	return (block_index);
}
