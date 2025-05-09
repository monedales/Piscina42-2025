#include <unistd.h>
void	ft_putstrptr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	// return (*str);
}

void	ft_putstrarr(char *str)
{
	int ix = 0;

	while (str[ix])
	{	
		write(1, &str[ix], 1);
		ix++;
	}

}

int main (void)
{
	ft_putstrptr("canseida");
	ft_putstrarr("canseeei");
	return (0);
}