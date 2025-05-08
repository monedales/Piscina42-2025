/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:28:59 by anunes-o          #+#    #+#             */
/*   Updated: 2025/05/04 15:36:00 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	validate_input(char *str)
{
	int	count;

	if (str[0] == '\0' || str == NULL)
		return (0);
	count = 0;
	while (str[count])
	{
		if (str[count] < '0' || str[count] > '9')
			return (0);
		count++;
	}
	return (1);
}

void	init_suffixes(char *suffixes[])
{
	suffixes[0] = "";
	suffixes[1] = "thousand";
	suffixes[2] = "million";
	suffixes[3] = "billion";
	suffixes[4] = "trillion";
	suffixes[5] = "quadrillion";
	suffixes[6] = "quintillion";
	suffixes[7] = "sextillion";
	suffixes[8] = "septillion";
	suffixes[9] = "octillion";
	suffixes[10] = "nonillion";
	suffixes[11] = "decillion";
	suffixes[12] = "undecillion";
	suffixes[13] = "duodecillion";
	suffixes[14] = "tredecillion";
}
