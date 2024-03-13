#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - Make a linear search for the element val in a list
 * @array: The list to search
 * @size: The size of the list
 * @value: The value to search for
 *
 * Return: The index of the value you're looking for, or -1 if that
 *	   value doesn't exists.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
