#include "main.h"
/**
 * print_diagonal - prints dagonal line
 * @n: int
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 1;


	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i <= n)
		{
			_putchar('\\');
			_putchar(' ');
			i++;
		}
		_putchar('\n');
	}
}
