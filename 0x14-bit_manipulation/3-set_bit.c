#include "main.h"
/**
 * set_bit - sets a bit at a certain index to 1
 * @n: bit to be set
 * @index: index of bit we want to set
 * Return: 1 if success, -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}

