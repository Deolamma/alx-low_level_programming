#include "function_pointers.h"
/**
 * int_index - loops through an int array
 * @array: array to be looped through
 * @size: size of array
 * @cmp: fxn pointer that compares each element of the array
 * with a certain int
 * Return: returns an int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}

