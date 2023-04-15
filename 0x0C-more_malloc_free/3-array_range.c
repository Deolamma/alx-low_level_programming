#include "main.h"
#include <stdlib.h>
/**
 * array_range - allocates memory for an int arr. ranging
 * from min. val. to max. val.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the address where range is stored
 */
int *array_range(int min, int max)
{
	int i;
	int val;
	int len;
	int *myarr;

	if (min > max)
		return (NULL);
	if (min == 0 && max == 0)
		return (NULL);
	if (min < 0 && max < 0)
	/* len: stores number of element to be in myarr */
	{
		len = ((-min) + max) + 1;
		myarr = malloc(len * sizeof(int));
	} else if (min < 0 && max > 0)
	{
		len = ((-min) + max) + 1;
		myarr = malloc(len * sizeof(int));
	} else if (min > 1)
	{
		len = max;
		myarr = malloc(len * sizeof(int));
	} else if (min == 0 && max > 0)
	{
		len = max + 1;
		myarr = malloc((len + 1) * sizeof(int));
	} else
	{
		return (NULL);
	}
	if (myarr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		val = min++;
		myarr[i] = val;
	}
	return (myarr);
}
