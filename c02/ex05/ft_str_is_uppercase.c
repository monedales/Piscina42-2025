
int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while(str[count])
	{
		if(str[count] < 'A' || str[count] > 'Z')
			return (0);
		count++;
	}
	return (1);
}

// #include <stdio.h>
// int main (void)
// {
// 	int i;

// 	// i = ft_str_is_uppercase("123");
// 	// i = ft_str_is_uppercase("ZEBRA");
// 	// i = ft_str_is_uppercase("AAAA");
//     i = ft_str_is_uppercase("ZEBRa");
// 	// i = ft_str_is_uppercase("");
// 	printf("teste: %d\n", i);
// 	return (0);
// }