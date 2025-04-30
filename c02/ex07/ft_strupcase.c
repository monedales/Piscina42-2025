/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:27:53 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/29 18:28:06 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 'a' - 'A' -> 97 - 65 = 32
char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] = str[count] - 32;
		count++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	string[] = "talvez";

// 	printf("temos caps? %s\n", string);
// 	ft_strupcase(string);
// 	printf("%s\n", string);
// 	return (0);
// }
