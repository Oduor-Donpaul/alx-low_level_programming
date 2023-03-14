#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to 2D array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2D array
 * NULL on failure
 * NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, r, col;
	int **ptr;

	ptr = malloc(sizeof(int *));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
	}
	for (r = 0; r < width; r++)
	{
		for (col = 0; col < r; col++)
			ptr[i] = 0;
	}
	for (r = 0; r < width; r++)
		for (col = 0; col < r; col++)
			free(ptr[i]);

	return (ptr);
}
