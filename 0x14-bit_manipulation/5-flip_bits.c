#include "main.h"
/**
 * flip_bits - retuns the number of flips required to match n and m
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned long int(number of flips requred)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits, counter = 0;
	int i;

	bits = m ^ n;
	if (bits == 0)
		return (-1);
	for (i = 0; i < 64; i++)
	{
		counter += bits & 1;
		bits = bits >> 1;
	}
	return (counter);
}
