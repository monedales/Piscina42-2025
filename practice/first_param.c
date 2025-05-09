#include <stdio.h>
#include <unistd.h>
int	main(int argc, char **argv)
{
	int arg = 0;
	if(argc > 1)
	{
		while (argv[1][arg])
		{
			write(1, &argv[1][arg], 1);
			arg++;
		}
	}
	write(1, "\n", 1);
	return (0);
}