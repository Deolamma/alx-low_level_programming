#include "main.h"
/**
 * print_sign - Prints the sign of any argument passed into the fxn
 * Returns a certain number based on the IF checks
 *
 * @n: integer argument to be passed into the fxn
 *
 * Return: returns based on the IF checks
 */
int print_sign(int n)
{
	/* IF check to determine sign of argument passed into fxn*/
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)

	{
		_putchar('0');
		return (0);
	}
	_putchar('-');

	return (-1);
}

