#include "main.h"
/**
 * get_bit - gets the bit at index
 * @n: decimal value in which we want to get the bit at index
 * @index: the bit to be gotten
 * Return: returns the bit at the given index n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_val;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/* move mask value to the current index */
	mask = 1UL << index;
	/* (n & mask) != 0 evaluates to a boolean, where; */
	/* if n & mask == 1, true (1) is returned */
	bit_val = (n & mask) != 0;
	return (bit_val);
}
