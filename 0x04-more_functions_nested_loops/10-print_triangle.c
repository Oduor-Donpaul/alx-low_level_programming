#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: int
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int j, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (i <= size)
	{
		x = size - i;

		for (j = 1; j <= x; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
}
