#include <stdio.h>
#include <unistd.h>
int	main(int argc, char **argv)
{
	// int arg = 0;
	int char_i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	char *last = argv[argc - 1];
	while (last[char_i])
	{
		write(1,&last[char_i], 1);
		char_i++;
	}
	write(1, "\n", 1);
	return (0);
}