#include <unistd.h>
#include <stdio.h>

char	*ft_rev_print (char *str)
{
	int	count;
	int last;

	count = 0;
	while (str[count])
		count++;
	last = count - 1; // recebe o lenght - 1;
	while (last >= 0)
	{
		write(1, &str[last], 1); //printa nessa posição e decrementa
		last--;
	}
	write(1,"\n",1);
	return(str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_print(argv[1]);
	}
	return (0);
}