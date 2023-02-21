#include "main.h"
/**
 * print_last_digit - takes int
 *
 * Return: value of last three digits
 */

int print_last_digit(int input)
{
	int last_digits;

	last_digits = input % 10;

	_putchar(last_digits);

	return last_digits;
}
