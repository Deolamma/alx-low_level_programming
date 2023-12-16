#include "search_algos.h"

/**
 * jump_search - implements the jump searching algorithm
 * @array: Array to be searched
 * @size: size of the array to be searched
 * @value: value to search for in array
 * Return: returns the value to be searched or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int prev = 0;
	int step, i;

	if (!array || size == 0)
		return (-1);

	step = (int) sqrt(size);

	while (array[step] < value && step <= (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += (int) sqrt(size);
	}

	/* COMMENT OUT TO UNFERSTAND WHAT GOES WRONG */
	/*if (array[step] >= value || step > (int) size)*/
		/*printf("Value checked array[%d] = [%d]\n", prev, array[prev]);*/


	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	for (i = prev; (i <= step) && (i < (int) size); i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}

	return (-1);
}
