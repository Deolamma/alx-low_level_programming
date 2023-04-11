#include "main.h"
#include <stdlib.h>
/**
 * create_array - initializes a new array with the char value pssd to fxn
 *
 * @size: This would be the size of the new array
 * @c: This is the char to be populated into the new array created
 *
 * Return: Returns a pointer to the new array created
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *myarr;

	if (size == 0)
		return (NULL);
	myarr = (char *) malloc(size * sizeof(char));
	if (myarr == NULL)
	{
		return (NULL);
	} else
	{
		for (i = 0; i < size; i++)
		{
			myarr[i] = c;
		}
	}
	return myarr;
}
