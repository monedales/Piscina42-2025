/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:10:37 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/01 18:11:09 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
		count++;
	while (src[count2])
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
int main(){
  char resultado[23] = "abacaxi ";
  printf("%s\n", resultado);

//   strcat(resultado, "ou abacate?");
  ft_strcat(resultado, "ou abacate?");
  printf("%s\n", resultado);
  
  return (0);
}*/
