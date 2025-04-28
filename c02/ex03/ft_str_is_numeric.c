#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] < '0' || str[count] > '9')
			return (0);
		count++;
	}
	return (1);
}

int	main(void)
{
	int	x;

	x = ft_str_is_numeric("9");

	printf("é número? %d\n", x);
	return (0);
}