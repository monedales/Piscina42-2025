/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:45:41 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/22 21:20:07 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*int	main(void)
{
	char	*str;
	int	lenght;

	str = "Hello, HELLO!";
	lenght = ft_strlen(str);
	printf("the lenght of the string is: %d\n", lenght);
	return (0);
}
*/
