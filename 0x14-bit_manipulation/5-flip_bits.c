#include "main.h"
#include <stdio.h>

/**
 * flip_bits - return required flips to match n and m
 * @n: number to match
 * @m: number to match
 * Return: flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits, count = 0;
	int index = 0;

	bits = m ^ n;

	for (; index < 64; index++)
	{
		count += bits & 1;
		bits = bits >> 1;
	}
	return (count);
}
