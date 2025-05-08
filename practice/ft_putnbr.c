int   	ft_abs(int n)
{
    if (n >= 0)
        return n;
    return -n;
}

void	putnbr(int nb)
{
	char	ld;
	int		rm;

	if (nb < 0)
		write(1, "-", 1);
	printf("ld: %c, rm: %d \n", ld, rm);
	rm = nb / 10;
	if (rm != 0)
		putnbr(rm);
	ld = ft_abs(nb % 10) + '0';
	write(1, &ld, 1);
}

int	main(void)
{
	// ft_putnbr(725);
	putnbr(-214);
	return (0);
}