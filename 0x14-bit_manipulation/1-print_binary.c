#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_binary - prints binary
 * @n: unsigned int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	char c;

	if (n > 1)
		print_binary(n >> 1);

	c = (n & 1) + '0';

	write(1, &c, 1);
}
