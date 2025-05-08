
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}
int is_alpha (char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

#include <unistd.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	// printf("%d", 'Z'- 'A');

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	int count = 0;
	char current_char = argv[1][0];
	while (current_char != '\0') 
	{
		current_char = argv[1][count];
		
		if (is_alpha(current_char))
		{
			if (current_char == 'z' || current_char == 'Z')
				argv[1][count] -= 'Z' - 'A';
			else
				argv[1][count] = argv[1][count] + 1;
		}	
		write(1, &argv[1][count], 1);
		count++;
	}
	write(1, "\n", 1);
	return(0);
}
