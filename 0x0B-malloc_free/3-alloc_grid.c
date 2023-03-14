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
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);


	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < i; j++)
			ptr[i][j] = 0;
	}
	for (i = 0; i < height; i++)
		free(ptr[i]);
	free(ptr);
	return (ptr);
}
