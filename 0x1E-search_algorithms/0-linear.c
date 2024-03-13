#include "search_algos.h"

/*linear_search - searches a value using linear search algorithm
 * @array: pointer to first element of an array
 * @size: the number of elements in the array
 * @value: value to search
 * Return: value or -1 if the array is null or value not present in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return -1;
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		return value;
	}
	return -1;
}
