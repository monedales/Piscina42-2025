
int ft_str_is_printable(char *str)
{
    int count;

    count = 0;
    while(str[count])
    {
        if(!(str[count] >= 32 && str[count] <= 126))
            return(0);
		count++;
    }
	return(1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int i;

// 	i = ft_str_is_printable("");
// 	printf("teste: %d\n", i);
// 	printf("vazia: %d\n", ft_str_is_printable("")); // deve retornar 1
// 	printf("abc123: %d\n", ft_str_is_printable("abc123")); // deve retornar 1
// 	printf("com espaço: %d\n", ft_str_is_printable("hello world")); // deve retornar 1
// 	printf("com \a (não imprimível): %d\n", ft_str_is_printable("abc\a123")); // deve retornar 0
// 	printf("com \n (não imprimível): %d\n", ft_str_is_printable("linha\nnova")); // deve retornar 0
// 	return (0);
// }