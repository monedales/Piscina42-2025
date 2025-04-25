#include <unistd.h>
#include <stdio.h>
 
void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int a;
	int b;

	a = 67;
	b = 32;

	printf("valor de a: %d", a);
	printf("valor de b: %d", b);
	swap(&a,&b);
	printf("valor de a: %d", a);
	printf("valor de b: %d", b);
}
