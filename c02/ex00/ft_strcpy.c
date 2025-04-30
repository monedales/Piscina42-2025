/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:53:54 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/25 16:30:17 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
// #include <unistd.h>
// int	main(void)
// {
// 	char	src[] = "KKK";
// 	char	dest[4];

// 	printf("%s\n", src);
// 	printf("%s\n", dest);

// 	ft_strcpy(dest, src);

// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// 	return (0);
// }