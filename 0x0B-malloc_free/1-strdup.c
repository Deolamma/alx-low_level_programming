#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies the content of a char array to another array
 *
 * @str: char array to be copied
 *
 * Return: Returns new array with the content of the str array
 */
char *_strdup(char *str)
{
	int i;
	char *myarr;
	int size = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	if (size == 0)
		return (NULL);
	myarr = (char *) malloc(size + 1);
	if (myarr == NULL)
		return  (NULL);
	for (i = 0; i < size; i++)
	{
		myarr[i] = str[i];
	}
	return (myarr);
}

