#include "main.h"
/**
 * print_alphabet - prints alphabet in ascending order
 *
 * Return: void
 */
void print_alphabet()
{
	char first_alphabet = 'a';

	for (; first_alphabet <= 'z'; first_alphabet++)
	{
		_putchar(first_alphabet);
	}
	_putchar('\n');
}	
