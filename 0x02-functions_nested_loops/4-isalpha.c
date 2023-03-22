#include "main.h"
#include <ctype.h>
/**
 * _isalpha - This checks if the argument passed is an alphabet or not
 *
 * @alp: This is the aregument passed into the fxn
 *
 * Return: Returns 1 if it is an alphabet
 * returns 0 if it's not
 */
int _isalpha(int alp)
{
	if ((isalpha(alp)) != 0)
		return (1);
	return (0);
}
