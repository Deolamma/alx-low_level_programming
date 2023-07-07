#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary digit to an Unsigned int
 * @b: binary digit to be converted to int
 * Return: returns the int representation of binary passed
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		/* I shift the LSB by 1 to make room for the next bit */
		result <<= 1;
		/*check if number is 1*/
		/* if b[i] is zero do nothing */
		/* if it is not 0 or 1, then it is an invalid number */
		if (b[i] == '1')
		{
			result |= 1;
		} else if (b[i] != '0')
		{
			return (0);
		}
		i++;
	}
	return (result);
}

