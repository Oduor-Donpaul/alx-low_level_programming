#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: char
 */
char *rot13(char *str)
{
	int i = 0, j;
	char rot13key[52];
	char alpha[52];

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13key[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
