#include "search_algos.h"
/**
 * search_space - prints range of elements to find value in
 * @arr: array to be searched in
 * @lIndex: start index
 * @rIndex: end index
 */
void search_space(int *arr, int lIndex, int rIndex)
{
	int i;

	printf("Searching in array: ");
	for (i = lIndex; i <= rIndex; i++)
	{
		printf("%d", arr[i]);
		if (i != rIndex)
		{
			printf(", ");
		} else
			printf("\n");
	}
}

/**
 * binary_search - searches for a value using binary search
 * @array: pointer to the first element of array to be searched
 * @size: size of given array
 * @value: value to search for
 * Return: Index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int rIndex = ((int) size) - 1;
	int lIndex = 0;
	int midIndex = 0;

	if (!array)
		return (-1);

	while (lIndex <= rIndex)
	{
		search_space(array, lIndex, rIndex);
		midIndex = (lIndex + rIndex) / 2;

		if (array [midIndex] == value)
			return (midIndex);

		if (value > array[midIndex])
		{
			lIndex = midIndex + 1;
		} else
		{
			rIndex = midIndex - 1;
		}
	}
	return (-1);
}
