#include "main.h"
/**
 * print_sign - takes input of type int
 *@input: int
 *
 * Return: 1 and print + if input is greater than zero
 * 0 and prints 0 if input is zero
 * -1 and prints - if input is less than zero
 */
int print_sign(int input)
{
	if (input > 0)
	{
		_putchar('+');
		return (1);
	} else if (input == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
