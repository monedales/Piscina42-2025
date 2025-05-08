/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 11:03:04 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/05/03 11:03:11 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int	argc_counter(int argc)
{
	if (argc == 3)
		return (2);
	else
		return (1);
}

int	main(int argc, char **argv)
{
	char				*line;
	struct s_dict_entry	*dict;
	int					dict_size;
	int					arg_count;
	char				*dict_name;

	dict_name = "numbers.dict";
	arg_count = argc_counter(argc);
	if ((arg_count) == 2)
		dict_name = argv[1];
	if (!validate_input(argv[1]))
	{
		ft_error();
		return (1);
	}
	dict_size = 41;
	dict = init_dict(dict_size);
	if (load_dict(dict, dict_name, dict_size) != 0)
	{
		free_dict(dict, dict_size);
		return (1);
	}
	print_nbr_word(argv[arg_count], dict, dict_size);
	free_dict(dict, dict_size);
	return (0);
}

void	print_nbr_word(char *num_str, struct s_dict_entry *dict, int dict_size)
{
	char	*word;

	word = search_dict(dict, dict_size, num_str);
	if (word)
	{
		if (num_str[0] == '1' && num_str[1] == '0'
			&& (num_str[2] == '0' || num_str[2] == '\0'))
		{
			write(1, "one ", 4);
		}
		write(1, word, ft_strlen(word));
	}
	else if (ft_strlen(num_str) <= 2)
		print_tens(num_str, dict, dict_size);
	else if (ft_strlen(num_str) == 3)
		print_hundreds(num_str, dict, dict_size);
	else
		print_lrg_nbr(num_str, dict, dict_size);
}
