/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:19:01 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/24 21:19:58 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

// int	main(void)
// {
// 	unsigned int	count;
// 	char	src[] = {"alow"};
// 	char	dest[4];
// 	unsigned int	count2;

// 	count = 2;
// 	ft_strncpy(dest, src, count);

// 	count2 = 0;
// 	while (count2 <= count -1)
// 	{
// 		// printf("escreva: %p ", &dest[count2]);
// 		write(1, &dest[count2], 1);
// 		count2++;
// 	}
// 	return (0);
// }