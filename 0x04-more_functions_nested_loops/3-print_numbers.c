#include "main.h"
/**
 * print_numbers - Prints numbers from 0-9
 *
 * Return: always returns an integer when eturn type is void
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
