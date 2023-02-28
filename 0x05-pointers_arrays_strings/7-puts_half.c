#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: char
 *
 * Return: Always
 */
void puts_half(char *str)
{
	int i = 0;
	int half;
	int len;

	while (str[i])
	{
		i++;
	}
	len = i;

	half = len / 2;

	while (str[half])
	{

		_putchar(str[half]);
		half++;
	}

	_putchar('\n');
}
