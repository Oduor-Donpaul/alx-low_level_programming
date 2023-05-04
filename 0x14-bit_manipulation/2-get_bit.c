#include "main.h"
#include <stdio.h>


/**
 * get_bit - returns value of bit at a given index
 * @index: index
 * @n: number
 * Return: value of bit a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
