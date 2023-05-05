#include "main.h"
/**
 * get_bit - gets a bit at a certain index
 * @n: bit to be gotten
 * @index: location at which bit is to be gotten
 * Return: -1 if fails or index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
