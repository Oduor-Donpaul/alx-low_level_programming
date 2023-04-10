#include <stdio.h>
/**
 * get_endionness - checks endianness
 * Return:0 for big endian
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *p;

	p = (char *) &m;

	return (*p & 1);
}
