#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: This is the digit to be checked.
 * Return: 1 if it is a digit and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
