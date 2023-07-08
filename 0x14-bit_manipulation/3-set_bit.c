#include "main.h"
/**
 * set_bit - sets bit of a decimal to 1 at a given index
 * @n: decimal whose bit is to be changed
 * @index: index at which bit is to be changed
 * Return: Returns 1 on Success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	(*n) |= mask;
	return (1);
}


