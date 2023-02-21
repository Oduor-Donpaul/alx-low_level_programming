#include "main.h"
/**
 * print_alphabet_x10 - prints 10 the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char first_alphabet = 'a';

	int lines = 0;

	while  (lines < 10)
	{
		for (; first_alphabet <= 'z'; first_alphabet++)
		{
			_putchar(first_alphabet);
		}
		_putchar('\n');
		lines++;
		first_alphabet = 'a';
	}
}
