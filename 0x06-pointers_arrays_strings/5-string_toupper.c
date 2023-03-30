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
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '!')
		{
			if (str[i] > 65 && str[i] <= 90)
			{
				str[i] = str[i] - 0;
			} else
			{
				str[i] = str[i] - 32;
			}
		} else
		{
			str[i] = str[i] - 0;
		}
		i++;
	}
	return (str);
}

