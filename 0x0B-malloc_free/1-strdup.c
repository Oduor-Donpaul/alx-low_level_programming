#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies a string given as aparameter
 * @str: string to be copied
 *
 * Return: NULL if srt is NULL
 * On successs a pointer to the duplicate string
 * NULL if insufficient memory
 */
char *_strdup(char *str)
{
	unsigned int i, j = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j])
	{
		j++;
	}

	ptr = (char *)malloc(sizeof(char) * (j + 1));

	for (i = 0; i < j; i++)
	{
		ptr[i] = str[i];
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
