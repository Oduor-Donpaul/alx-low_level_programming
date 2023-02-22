#include "main.h"
/**
 * print_times_table - prints n times table
 * @n: int
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int num = i * j;

			if ( j==0 )
				_putchar(num + '0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (num < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else if (num < 100)
				{
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
				else
				{
					_putchar((num / 100) + '0');
					_putchar((num / 10 % 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
