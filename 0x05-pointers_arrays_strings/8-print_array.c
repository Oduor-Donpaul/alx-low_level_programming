#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: int
 * @n: int
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 1;

	printf("%d", a[0]);

	while (i < n)
	{
		printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
