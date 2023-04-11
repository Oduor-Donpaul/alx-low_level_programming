#include "main.h"
/**
 * set_bit - sets the bit
 * @n: unsigned int
 * @indx: index to be accessed
 * Return: 1 on success or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;
	int j;

	if (index > 64)
		return (-1);
	for (j = 0; j < 64; j++)
	{
		bit = 1 << index;
		*n = *n | bit;
	}
	return (1);
}
