/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:53:54 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/23 20:12:49 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{

	while ((*dest = *src) != '\0')
	{
		*dest++;
		*src++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "KKK";
	char	dest[1];

	printf("%s\n", src);
	printf("%s\n", dest);

	ft_strcpy(dest, src);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}
