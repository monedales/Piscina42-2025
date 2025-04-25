/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:17:44 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/24 20:36:03 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ftstrlen(char	*str)
{
	int	count;

	count = 0;
	int i = 0;
	while(str[i])
	{
		count++;
		i++;
	}
	return (count);
}

int	main(void)
{
	char	*str;
	int	lenght;

	str = "ALOW";
	lenght = ftstrlen(str);
	printf("lenght: %d", lenght);
	return (0);
}
	
