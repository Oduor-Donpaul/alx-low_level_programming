#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2D array memory
 * @grid: pointer to 2D array
 * @height: height of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
