#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: binary value to be converted
 * Return: returns an unsigned int val. 4 the binary passed into fxn
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n = n * 2 + (b[i] - '0');
		i++;
	}

	return (n);
}
