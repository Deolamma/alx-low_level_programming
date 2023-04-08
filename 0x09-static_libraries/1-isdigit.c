#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if an int(char) passed is a digit
 *
 * @c: argument to be passed into fxn _isdigit
 *
 * Return: 1 if arg isdigit, 0 otherwise
 */
int _isdigit(int c)
{
	if ((isdigit(c)) != 0)
		return (1);
	return (0);
}
