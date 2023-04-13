#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory allocated to a 2-d array
 *
 * @grid: This is the 2-d array in a memory location
 * @height: this is the height of the array or col
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

