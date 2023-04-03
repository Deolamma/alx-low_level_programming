#include "main.h"
/**
 * print_chessboard - prints out the content of a multidimensional array
 *
 * @a: pointer to a multidimensional array
 *
 * Return: always void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
