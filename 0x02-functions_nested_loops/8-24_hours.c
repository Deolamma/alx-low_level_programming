#include "main.h"
/**
 * jack_bauer - prints countdown of every min. of the day
 *
 * Return: always return int. whent return type is void
 */
void jack_bauer(void)
{
	int n, n1;

	n = 0;

	while (n < 24)
	{
		n1 = 0;
		while (n1 < 60)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((n1 / 10) + '0');
			_putchar((n1 % 10) + '0');
			_putchar('\n');
			n1++;
		}
		n++;
	}
}

