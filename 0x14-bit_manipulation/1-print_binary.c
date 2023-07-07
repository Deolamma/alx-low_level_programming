#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a decimal
 * @n: decimal to be converted
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int leadingZeros = 1;

	/* set the Leftmost bit to 1 */
	mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	/* Handling special case of 0 */
	if (n == 0)
	{
		_putchar('0');
	}
	/* checks that we are still within our testing range */
	/* i.e. we still have 1 within our mask value */
	while (mask > 0)
	{
		/* indicates that the current bit of n is 1 */
		/* Therefore we can stop ignoring leading zeros */
		if ((mask & n) != 0)
		{
			leadingZeros = 0;
			_putchar('1');
		} else if (leadingZeros == 0)
		{
			_putchar('0');
		}
		/* We shift our mask bit by 1 */
		mask >>= 1;
	}
}
