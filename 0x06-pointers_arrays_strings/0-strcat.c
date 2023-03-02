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
	char new_dest[100];

	while (dest[i])
		d++;
	while (src[i])
		s++;
	for (i = 0; src[i] <= s && dest[i] != '\0')
	{
		for (i = 0; dest[i] <= d; i++)
		{
			new_dest += dest[i];
		}
		new_dest += src[i];
	}
	

	return (new_dest);
}
