#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to 2-dimensional array
 *
 * @width: this is the number of row of the array
 * @height: this is the number of column of the array
 *
 * Return: Returns a pinter to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int a;
	int **myarr;

	if (width <= 0 || height <= 0)
		return (NULL);
	myarr = (int **) malloc(width * sizeof(int *));
	if (myarr == NULL)
		return (NULL);
	for (a = 0; a < width; a++)
	{
		myarr[a] = (int *) malloc(height * sizeof(int));
		if (myarr[a] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			myarr[i][j] = 0;
		}
	}	
	return (myarr);
}

