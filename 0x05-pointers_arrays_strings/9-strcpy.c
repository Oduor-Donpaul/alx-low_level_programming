#include "main.h"
/**
 * _strcpy - copies the string pointed to
 * @dest: char
 * @src: char
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
