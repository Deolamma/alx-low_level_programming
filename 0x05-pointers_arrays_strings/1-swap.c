#include "main.h"
/**
 * swap_int - swaps the values of 2 int using their pointers
 *
 * @a: first int
 * @b: second int
 *
 * Return: returns void (always an int)
 */
void swap_int(int *a, int *b)
{
	int i, j;

	j = *b;
	i = *a;
	*a = j;
	*b = i;
}

