#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets bit
 * @n: number
 * @index: index to be accessed
 * Return: 1 on success or -1 if an error occcur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit, i = 0;

	if (index >= 64)
		return (-1);

	bit = (1UL << index);

	return (1);
}
