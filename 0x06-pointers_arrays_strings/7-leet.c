#include "main.h"
/**
 * leet - encodes string into 1337
 * @str: string to be encoded
 *
 * Return: char
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		} else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		} else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		} else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		} else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
		i++;
	}
	return (str);
}
