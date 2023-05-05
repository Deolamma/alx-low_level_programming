#include "main.h"
/**
 * flip_bits - number of bits to flip to get from one number
 * to another
 * @n: n
 * @m: m
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}

