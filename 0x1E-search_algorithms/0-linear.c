#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array.
 * @array: pointer to the first element in the array
 * @size: size of the array to be searched
 * @value: value to be found in the array
 * Return: returns the index at which the value was found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	while (i < (int) size)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = ", i);
			printf("[%d]\n", *(array + i));
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		i++;
	}
	return (-1);
}
