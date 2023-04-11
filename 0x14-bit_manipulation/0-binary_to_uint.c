#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to int
 * @b: string to be converted
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int c = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		c = c << 1;

		if (b[i] == '1')
			c = c | 1;
	}

	return (c);
}
