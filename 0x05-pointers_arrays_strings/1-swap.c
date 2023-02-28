#include "main.h"
/**
 * swap_int - swaps the integers
 * @a: int
 * @b: int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;

	*b = x;
}
