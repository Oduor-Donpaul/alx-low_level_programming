#include "main.h"
/**
 * reverse_array - reverses content of an array of integers
 * @a: pointer to array
 * @n: number of array elements
 *
 * Returb: void
 */
void reverse_array(int *a, int n)
{
	int newArray;
	int i, j;

	for (i = n - 1; i >= 0; i--)
	{
		for (j = 0; j < n; j++)
		{
			newArray = a[i];
		}
	}
	a[i] = newArray;
}
