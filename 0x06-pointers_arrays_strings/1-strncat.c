#include "main.h"
/**
 * _strncat - concatenates two strings
 * @n: maximum number of bytes from src used
 * @dest: destination of the result
 * @src: source
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int d = 0;

	while (dest[d])
		d++;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[d + i] += src[i];
	}
	return (dest);
}
