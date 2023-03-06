#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to a destination block
 * @src: pointer to source block
 * @n: size of the memory block to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*ptr = *src;
		ptr++;
		n--;
	}
	return (dest);
}
