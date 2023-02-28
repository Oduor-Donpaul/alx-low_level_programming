#include "main.h"
/**
 * puts2 - prints characters of a string
 * @str: char
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i]) % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		} else
		{
			i++;
		}
	}
	_putchar('\n');
}
