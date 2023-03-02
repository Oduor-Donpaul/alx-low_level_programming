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
	int i;
	int s = 0;
	int d = 0;

	while (dest[d])
		d++;
	while (src[s])
		s++;
	for (i = 0; src[i] <= s && dest[i] != '\0'; i++)
	{
		dest += src[i];
	}


	return (dest);
}
