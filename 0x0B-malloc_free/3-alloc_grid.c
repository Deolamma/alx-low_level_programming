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
	int **myarr;

	if (width <= 0 || height <= 0)
		return (NULL);
	myarr = (int **) malloc(height * sizeof(int *));
	if (myarr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		myarr[i] = (int *) malloc(width * sizeof(int));
		if (myarr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(myarr[i]);
			free(myarr);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			myarr[i][j] = 0;
		}
	}
	return (myarr);
}

