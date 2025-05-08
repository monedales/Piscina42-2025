#include <unistd.h>
#include <stdio.h>

int	ftstrlen(char	*str)
{
	int	count;

	count = 0;
	int i = 0;
	while(str[i])
	{
		count++;
		i++;
	}
	return (count);
}

int	main(void)
{
	char	*str;
	int	lenght;

	str = "ALOW";
	lenght = ftstrlen(str);
	printf("lenght: %d", lenght);
	return (0);
}
	
