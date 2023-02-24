#include "main.h"
/**
 * print_square - prints square
 * @size: int
 *
 * Return: void
 */
void print_square(int size)
{
	int x;
	int j = 1;

	if (size <= 0)
	{
		_putchar('#');
	}
	while (j <= size)
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
		j++;
	}
}
