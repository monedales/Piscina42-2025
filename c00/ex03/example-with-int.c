#include <unistd.h>
void example_with_conversion(void)
{
    int number = 0;
    char digit;
    
    while (number <= 9)
    {
        digit = number + '0';  // Convert int to char (e.g., 1 + 48 = 49 = '1')
        write(1, &digit, 1);
        number++;
    }
}

int main()
{
	example_with_conversion();
	return(0);
}
