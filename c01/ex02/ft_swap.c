/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:15:05 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/22 16:15:17 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

int main() {
  
	int x;
	int y;
	
	x = 33;
	y = 30;
	
	int *m = &x;
	int *l = &y;
	
  
	
	
	printf("conteúdo: %d e endereço da var x: %p\n", x, (void *)&x);
	printf("conteúdo: %d e endereço da var y: %p\n", y, (void *)&y);
  
	printf("conteúdo: %p e endereço do ponteiro *m: %p\n", (void *)m ,&m);
	printf("conteúdo: %p e endereço do ponteiro *l: %p\n", (void *)l ,&l);
	ft_swap(&x, &y);
	printf("conteúdo: %d e endereço da var x após a função ultimate: %p\n", x, &x);
	printf("conteúdo: %d e endereço da var y após a função ultimate: %p\n", y, &y);
	return 0;
  }
