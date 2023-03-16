#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size to be allocated to each element
 *
 * Return: ponter to the allocated memory
 * NULL if nmemb or size is equal to zero
 * NULL if calloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	temp = ptr;

	for (i = 0; i < size * nmemb; i++)
		temp[i] = 0;
	return (ptr);
}
