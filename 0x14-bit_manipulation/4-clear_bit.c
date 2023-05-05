#include "main.h"
/**
 * clear_bit - set bit to 0 at certain index
 * @n: bit to be set to o
 * @index: index where bit will be set to zero
 * Return: 1 Succes or -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= -(1UL << index);
	return (1);
}
