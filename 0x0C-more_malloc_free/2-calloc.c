#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memmory for an array of nmemb elements
 * and initializes values to 0
 *
 * @nmemb: Number of elements to be created in array
 * @size: THis would give us the size of elements in bytes
 *
 * Return: returns nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *myarr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	myarr = calloc(nmemb, sizeof(size));
	if (myarr == NULL)
		return (NULL);
	return(myarr);
}
