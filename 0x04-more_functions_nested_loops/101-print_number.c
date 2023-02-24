#include "main.h"
/**
 * print_number - prints an integer
 * @n: int
 *
 * Return: void
 */
void print_number(int n)
{
	if (n / 1000 > 0)
	{
		_putchar(n / 1000 + '0');

	} else if (n / 100 > 0)
	{
		_putchar(n / 100 + '0');

	} else if (n / 10 > 0)
	{
		_putchar(n / 10 +'0');

	} else 
	{
		_putchar(n % 10 +'0');
	}
}
