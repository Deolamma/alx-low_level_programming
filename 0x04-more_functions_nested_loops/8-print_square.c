#include "main.h"
/**
 * print_square - Prints squares based on arg
 * @size: argument that determines size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

