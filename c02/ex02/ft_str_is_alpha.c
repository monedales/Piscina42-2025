/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:32:44 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/25 17:32:50 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//alterar header

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (!((str[count] >= 'a' && str[count] <= 'z')
			|| (str[count] >= 'A' && str[count] <= 'Z')))
			return (0);
		count++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	i;

// 	i = ft_str_is_alpha("$");
// 	printf("teste: %d\n", i);
// 	return (0);
// }