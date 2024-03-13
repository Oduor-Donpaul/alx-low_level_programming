#include "search_algos.h"
#include <stdio.h>
/**
 * print_arr - Print an array
 * @arr: The array to print
 * @start: The begining of the array to print
 * @end: The end of the array to print
 */
void print_arr(int *arr, int start, int end)
{
	int i;

	printf("Searching in array:");
	for (i = start; i < end; i++)
		printf(" %d,", arr[i]);
	printf(" %d\n", arr[end]);
}
/**
 * binary_search - Make a binary search in an ordered list
 * @array: The list to search
 * @size: The size of the list
 * @value: The value to search for
 *
 * Return: The index of the value you're looking for, or -1
 *	   If no match was found, or an empty array was given
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, temp;

	if (array == NULL)
		return (-1);
	for (start = 0, end = size - 1; start <= end; )
	{
		print_arr(array, start, end);
		temp = (start + (end - start) / 2);
		if (value > array[temp])
		{
			start = temp + 1;
		}
		else
		{
			end = temp - 1;
		}
		if (array[temp] == value)
			return (temp);
	}
	return (-1);
}
