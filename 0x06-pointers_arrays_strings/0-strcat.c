#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	for (; src[i] <= '\0'; i++)
	{
		if (dest[-1])
		{
			dest += src[0];
		}
		dest += src[i + 1];
	}
	return (dest);
}
