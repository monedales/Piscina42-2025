#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while(str[count])
	{
		if(str[count] < 'a' || str[count] > 'z')
			return (0);
		count++;
	}
	return (1);
}

int main (void)
{
	int i;

	i = ft_str_is_lowercase("123");
	// i = ft_str_is_lowercase("zebra");
	// i = ft_str_is_lowercase("zebrAAAA");
	// i = ft_str_is_lowercase("");
	printf("teste: %d\n", i);
	return (0);
}