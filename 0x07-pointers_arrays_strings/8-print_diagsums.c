#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagona values in an array
 *
 * @a: This is a pointer to the multidimensional array
 * @size: This is the size of the array
 *
 * Return: This returns void (always an int)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int temp = 0;
	int temp1 = 0;

	for (i = 0; i < size; i++)
	{
		temp += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		temp1 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", temp, temp1);
}

