#include <ctype.h>
/**
 * _isupper - checks if an int(char) passed is upper
 *
 * @c: argument to be passed into fxn isupper
 *
 * Return: 1 if arg isupper, 0 otherwise
 */
int _isupper(int c)
{
	if ((isupper(c)) != 0)
		return (1);
	return (0);
}
