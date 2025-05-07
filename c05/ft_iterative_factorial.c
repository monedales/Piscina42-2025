#include <stdio.h>
int ft_iterative_factorial(int nb)
{
    int i;

    i = 1;
    printf("nb é: %d\n", nb);   
    while(nb > 0)
    {
        
        i = (nb - 1) * nb;
        printf("nb é: %d\n", nb);
        printf("i é: %d\n", i);
        nb--;
    }
    return nb;
}

int main(void)
{
    printf("fatorial de 5 é: %d",ft_iterative_factorial(5));
    return 0;
}