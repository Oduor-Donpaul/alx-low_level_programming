#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory address
 * @b: value to fill the memory
 * @n: size of memory to be filled
 *
 * Return: pointer to memory address s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++, n--)
	{
		s[index] = b;
	}
	return (s);
}
