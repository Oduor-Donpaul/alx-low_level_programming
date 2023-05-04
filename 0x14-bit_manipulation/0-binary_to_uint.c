#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to uint
 * @b: pointer to binary string
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int count = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		count = count << 1;

		if (b[i] == '1')
			count = count | 1;
	}
	return (count);
}
