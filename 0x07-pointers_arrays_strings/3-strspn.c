#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: segment containing substring
 * @accept: substring
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *ptr = s;
	unsigned int i = 0;
	int j;

	while (*ptr != ' ')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*ptr == accept[j])
			{
				i++;
				break;
			}
			if (accept[j] == '\0')
			{
				break;
			}
		}
		ptr++;
	}

	return (i);
}
