int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while(str[count])
		count++;
	return(count);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	catto;

// 	str = "louis";
// 	catto = ft_strlen(str);
// 	printf("the lenght of my cat's name is: %d", catto);
// 	return(0);
// }