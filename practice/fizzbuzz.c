#include <stdio.h>
#include <unistd.h>

int putnbr(int nb)
{
	long int n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	int div = n / 10;
	int digit = (n % 10) + '0';
	if (div > 0)
		putnbr(div);
	write(1, &digit, 1);
}
int	main(void)
{
	int number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		if (number % 3 == 0)
			write(1, "fizz\n", 5);
		if (number % 5 == 0)
			write(1, "buzz\n", 5);
		else 
		{
			putnbr(number);
			write(1, "\n", 1);
		}
		number++;
	}
	return 0;

}

// // char *s = "ABC";
// 	// printf("endereco: %p, valor: %c ", s + 3, *(s + 3));

// 	// char *s2 = { 'H', 'E', 'L', '\0' };

// 	char *s3[] = { "hello", "world" };

// 	// int 	int2char = 2 + '0';
// 	// char 	char2int = '2' - '0';
// 	// printf("int: %c, char: %i", int2char, char2int);  
	
// 	int NUMERO = 2596;
	
// 	int SOBROU = NUMERO / 10;
// 	int ULTIMO_DIGITO = NUMERO % 10;
// 	char ULTIMO_DIGITO_CHAR = ULTIMO_DIGITO + '0';

// 	printf("SOBROU: %i \n", SOBROU);
// 	printf("ULTIMO_DIGITO: %i \n", ULTIMO_DIGITO);
// 	printf("ULTIMO_DIGITO_CHAR: %c \n", ULTIMO_DIGITO_CHAR);
	
// 	ULTIMO_DIGITO = SOBROU % 10;
// 	SOBROU = SOBROU / 10;
// 	ULTIMO_DIGITO_CHAR = ULTIMO_DIGITO + '0';

// 	printf("\n");
// 	printf("SOBROU: %i \n", SOBROU);
// 	printf("ULTIMO_DIGITO: %i \n", ULTIMO_DIGITO);
// 	printf("ULTIMO_DIGITO_CHAR: %c \n", ULTIMO_DIGITO_CHAR);

// 	ULTIMO_DIGITO = SOBROU % 10;
// 	SOBROU = SOBROU / 10;
// 	ULTIMO_DIGITO_CHAR = ULTIMO_DIGITO + '0';

// 	printf("\n");
// 	printf("SOBROU: %i \n", SOBROU);
// 	printf("ULTIMO_DIGITO: %i \n", ULTIMO_DIGITO);
// 	printf("ULTIMO_DIGITO_CHAR: %c \n", ULTIMO_DIGITO_CHAR);


// 	if (SOBROU == 0)
// 	{
// 		if (ULTIMO_DIGITO < 0)
// 		{
// 			ULTIMO_DIGITO *= -1;
// 			ULTIMO_DIGITO_CHAR = ULTIMO_DIGITO + '0';
// 		}
// 	}	