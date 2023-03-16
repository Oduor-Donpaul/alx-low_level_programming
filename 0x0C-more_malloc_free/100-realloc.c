#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to memory previously alllocated with malloc of size old_size
 * @old_size: size of the allocated space for ptr
 * @new_size: new size in of the new memory block
 *
 * Return: ptr if new_size is equal to old_size
 * if ptr is NULL, call malloc(new_size for all values of old_size and new_size
 * if new_size > old_size, the added memory should not be initialized
 * if new_size is equal to zero and ptr is not NULL, call free(ptr).Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
		new_size = old_size;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	new_ptr = malloc((sizeof(*((char *)ptr))) * new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new_ptr);
}
