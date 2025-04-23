/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:59:59 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/20 21:36:40 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// int	main(void)
// {
// 	int     a;
//     int *ptr;
	
// 	a = 2;  
//     ptr = &a;
//     printf("conteúdo da var a: %d\n", a);
// 	printf("conteúdo do endereço da var a: %p\n", &a);
// 	printf("conteúdo do ponteiro ptr: %p\n", ptr);
// 	printf("conteúdo da var apontada por ptr: %d\n", *ptr);
//     ft_ft(&a);
// 	printf("conteúdo da var apontada por ptr após função ft_ft: %d\n", *ptr)
// }
