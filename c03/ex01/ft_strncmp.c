/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:08:36 by maria-ol          #+#    #+#             */
/*   Updated: 2025/05/01 18:10:05 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		if (s1[count] != s2[count] && s1[count] != '\0')
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s1 = "abacate";
    char *s2 = "abac ";

    // Usando strncmp com os primeiros 5 caracteres
    // int res2 = strncmp(s1, s2, 4);
	int res3 = ft_strncmp(s1, s2, 6);
    if (res3 == 0)
        printf("strncmp: As 5 primeiras letras são iguais! %d\n", res3);
	else
        printf("strncmp: As 5 primeiras letras são diferentes!%d\n", res3);

    return (0);
}*/
