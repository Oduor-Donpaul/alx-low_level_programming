#include "main.h"
/**
 * print_line - prints line
 *@n: int
 *
 *Return: void
 */
void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
