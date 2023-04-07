#include "main.h"
/**
 * int get_bit - returnsa bit at a given index
 * @n: unsigned int
 * @index: index
 * Return: the value at index
 * or return -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
