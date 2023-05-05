#include "main.h"
/**
 * print_binary - prints the binary of decimal val. passed into fxn
 * @n: decimal to be converted to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int checks;

	checks = 1UL << (sizeof(unsigned long  int) * 8 - 1);
	while (checks > 0)
	{
		if ((n & checks) == 0)
		{
			if (i)
			{
				_putchar('0');
			}
		} else
		{
			_putchar('1');
			i = 1;
		}
		checks >>= 1;
	}
	if (!i)
	{
		_putchar('0');
	}
}

