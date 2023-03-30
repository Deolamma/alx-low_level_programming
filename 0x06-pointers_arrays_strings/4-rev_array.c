#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the order of an array
 *
 * @a: This is the array pointer
 * @n: Array size
 *
 * Return: This returns void (always Int. value)
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	if (n != 0)
	{
		for (i = 0; i < n / 2; i++)
		{
			tmp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = tmp;
		}
	}
}

