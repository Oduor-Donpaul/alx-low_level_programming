#include "search_algos.h"

/**
 * binary_search - uses binary seach to search an array
 * @array: pointer to first element of ana array
 * @value: value to be searched
 * @size: number of elements in the array
 * Return: index of the value or -1 if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (array == NULL)
	{
		return -1;
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return mid;
		}
		if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}
	return -1;
}
