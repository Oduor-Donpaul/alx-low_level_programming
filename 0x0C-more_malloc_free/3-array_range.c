#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array
 * NULL if min > max
 * NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
	}
	return (ptr);
}
