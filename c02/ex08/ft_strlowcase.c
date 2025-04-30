/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:27:02 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/29 18:27:41 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] = str[count] + 32;
		count++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	string[] = "CAPS";

// 	printf("já foi pro %s\n",string);
// 	printf("%s bom demais", ft_strlowcase(string));
// 	return (0);
// }
