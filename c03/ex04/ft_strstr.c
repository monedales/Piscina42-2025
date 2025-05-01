/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:37:00 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/01 18:37:35 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	i;

	count = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		i = 0;
		while (str[count + i] == to_find[i] && to_find[i] != '\0')
			i++;
		if (to_find[i] == '\0')
		{
			return (&str[count]);
		}
		count++;
	}
	return ("0");
}

/*#include <stdio.h>
#include <string.h>
int	main(void){
	char	*ptr;
	char	base[] = "Açaí com yanana y mel";
	char	comparison[] = "y mel";

	printf("String 'base':\n%s\n\n", base);
	printf("Substring 'comparison':\n%s\n\n", comparison);
	// ptr = strstr(base, comparison);
	ptr = ft_strstr(base, comparison);
	if (ptr != NULL)
	{
		printf("Substring encontrada!\n");
		printf("Substring inicia na posição %s\n", ptr);
	}
	else
	{
		printf("Substring não encontrada!\n");
	}

	return (0);
}*/
