#include "main.h"
#include <stdio.h>
/**
 * clear_bit - clears bit sets bit to 0
 * @n: pointer to binary number
 * @index: index
 * Return: 1 on success or -1 if error ocurred
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
