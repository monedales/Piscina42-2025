/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:36:36 by anunes-o          #+#    #+#             */
/*   Updated: 2025/05/04 15:58:11 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERFILE_H
# define HEADERFILE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

// defining both as strings to make manipulation easy
struct s_dict_entry {
	char	*key;
	char	*value;
};

//define all the prototypes used in this program to be called in other functions
//depois separar por arquivos
void	ft_putchar(char c);
void	ft_error(void);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		ft_strcmp(char *s1, char *s2);
int		argc_counter(int argc);

// utils2.c
int		validate_input(char *str);
void	init_suffixes(char *suffixes[]);

// Funções do parse.c
int		read_line(int fd, char *buffer, int size);
int		parse_line_to_dict(char *line, struct s_dict_entry *entry);

// dict.c
struct s_dict_entry	*init_dict(int dict_size);
void	free_dict(struct s_dict_entry *dict, int size);
void	print_dict(struct s_dict_entry *dict, int size);
char	*search_dict(struct s_dict_entry *dict, int dict_size, char *key);
int		load_dict(struct s_dict_entry *dict, char *filename, int dict_size);

//prints.c
void	print_hundreds(char *str, struct s_dict_entry *dict, int dict_size);
void	print_nbr_word(char *num_str, struct s_dict_entry *dict, int dict_size);
void	print_number(char *number, struct s_dict_entry *dict, int dict_size);
void	print_tens(char *str, struct s_dict_entry *dict, int dict_size);
int		extract_blocks(char *num_str, char blocks[15][4]);
void	print_lrg_nbr(char *num_str, struct s_dict_entry *dict, int dict_size);
#endif
