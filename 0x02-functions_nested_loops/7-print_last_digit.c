#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Should return the last digit of whatever argument
 * that was passed into the fxn
 *
 * @n: int argument to be passed into the print_last_digit fxn
 *
 * Return: should return an integer value which should be the last digit
 * of the argument passed
 */
int print_last_digit(int n)
{
	/* store for the last value */
	int x;

	x = abs(n % 10);
	_putchar(x + '0');
	return (x);
}

