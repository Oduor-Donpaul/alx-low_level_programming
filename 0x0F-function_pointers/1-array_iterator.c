#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - exucutes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action: pointer to a function to be executed
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

