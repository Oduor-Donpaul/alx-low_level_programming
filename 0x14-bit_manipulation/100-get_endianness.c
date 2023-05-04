#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian ot 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
