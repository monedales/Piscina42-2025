/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:11:36 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/01 18:11:53 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	county;
	unsigned int	count;

	count = 0;
	county = 0;
	while (dest[count])
		count++;
	while (county < nb && src[county])
		dest[count++] = src[county++];
	dest[count] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned int	num;
	char resultado[23] = "abacaxi ";
	num = 7;
	printf("%s\n", resultado);
	// strncat(resultado, "ou abacate?", num);
	ft_strncat(resultado, "ou abacate?", num);
	printf("%s\n", resultado);
	return (0);
}*/
