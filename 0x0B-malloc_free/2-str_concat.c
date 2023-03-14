#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to the newly allocated memory
 * NULL if NULL is passed
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i = 0, j = 0;
	char *ptr;
	
	if (s1 == NULL)
		s1[] = "";
	if (s2 == NULL)
		S2[] = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	for (len1 = 0; len1 < i; len1++)
	{
		ptr[len1] = s1[len1];
	}
	for (len2 = 0; len2 < j; len2++)
	{
		ptr[len1 + len2] = s2[len2];
	}
	return (ptr);
}
