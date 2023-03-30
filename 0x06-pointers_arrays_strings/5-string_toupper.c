#include "main.h"
/**
 * string_toupper - converts strings from lower to uppercase
 *
 * @str: str array that'll be passed into the fxn
 *
 * Return: Returns a array pf strings
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

