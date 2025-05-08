/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:29:35 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/07 18:13:13 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>
// Imprimir todos os argumentos recebidos menos o nome 
// do programa (argv[0]), e fazer isso na ordem inversa.
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = (argc - 1);
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
