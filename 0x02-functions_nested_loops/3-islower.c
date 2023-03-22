#include "main.h"
#include <ctype.h>
/**
 * _islower - This checks that the argument passed into this fxn
 * is a lower case alphabet
 *
 * @low: This is the argument that should be passed into the fxn
 * to determine case
 *
 * Return: It returns 0 if argument is not lowercase
 * returns positive integer > 0 if arg is lowercase
 */
int _islower(int low)
{
	if (islower(low) != 0)
		return (1);
	return (0);
}

