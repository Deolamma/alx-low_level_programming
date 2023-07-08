#include "main.h"
/**
 * clear_bit - sets bit at given index to 0 === clearing bit
 * @n: decimal value whose bit is to be cleared
 * @index: index at which bit is to be changed
 * Return: Returns 1 on Success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
