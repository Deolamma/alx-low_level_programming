#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - loops through an int array using a fxn pointer
 * @array: array to be looped through
 * @size: size of array
 * @action: fxn pointer to carry out the looping
 * Return: Noting
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
