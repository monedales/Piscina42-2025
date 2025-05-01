/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:11:16 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/01 18:06:59 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
		count++;
	return (s1[count] - s2[count]);
}

/*#include <stdio.h>
#include <string.h>
int	main(void) {
  char	str1[] = "caSa";
  char	str2[] = "casA";
  char	str3[] = "casa";

  printf("resultado: %d\n", ft_strcmp(str1, str2));
  printf("resultado2: %d", strcmp(str1, str2));

  return (0);
}*/
