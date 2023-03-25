#include "main.h"
/**
 * more_numbers - prints the numbers 0-14 10 times
 *
 * Return: Always an int when return type is void
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(48 + (j / 10));
				_putchar(48 + (j % 10));
			} else
			{
				_putchar(48 + j);
			}
		}
		_putchar('\n');
		i++;
	}
}
