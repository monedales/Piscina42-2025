void	ft_add(int *ptr, int number)
{
	*ptr += number;
}

void	ft_multi(int *ptr, int number)
{
	*ptr *= number;
}

void	ft_subs(int *ptr, int number)
{
	*ptr -= number;
}

void	ft_div(int *ptr, int number)
{
	*ptr /= number;
}

#include <stdio.h>
int	main(void)
{
	int x = 10;
	int number = 5;
	int *ptr = &x;
	
	// ft_add(ptr, number);
	// printf("resultado: %d", x);
	// ft_multi(ptr, number);
	// printf("resultado: %d", x);
	// ft_subs(ptr, number);
	// printf("resultado: %d", x);
	ft_div(ptr, number);
	printf("resultado: %d", x);
	return (0);
}