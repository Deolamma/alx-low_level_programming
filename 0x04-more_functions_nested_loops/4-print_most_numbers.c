#include "main.h"
/**
 * print_most_numbers - Prints most numbers btwn 0&9
 *
 * Return: always returns an integer when eturn type is void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar('0' + a);
	}
	_putchar('\n');
}
