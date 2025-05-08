/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:10:29 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/07 18:14:14 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

//first: compare the arguments using strcmp function
//compare the first with the next one, and keep doing this
//while swaping its value with a temporary variable
void	sort_arguments(int argc, char **argv)
{
	int		current;
	int		next;
	char	*temp;

	temp = 0;
	current = 1;
	while (current < argc - 1)
	{
		next = current + 1;
		while (next < argc)
		{
			if (ft_strcmp(argv[current], argv[next]) > 0)
			{
				temp = argv[current];
				argv[current] = argv[next];
				argv[next] = temp;
			}
			next++;
		}
		current++;
	}
}

int	main(int argc, char **argv)
{
	int	arg;
	int	char_i;

	sort_arguments(argc, argv);
	arg = 1;
	while (arg < argc)
	{
		char_i = 0;
		while (argv[arg][char_i])
		{
			write(1, &argv[arg][char_i], 1);
			char_i++;
		}
		write(1, "\n", 1);
		arg++;
	}
	return (0);
}
// USANDO STRLEN
// int	main(int argc, char **argv)
// {
// 	int	arg;
// 	// int	char_i;

// 	sort_arguments(argc, argv);
// 	arg = 1;
// 	while (arg < argc)
// 	{
// 		write(1, argv[arg], strlen(argv[arg]));
// 		write(1, "\n", 1);
// 		arg++;
// 	}
// 	return (0);
// }