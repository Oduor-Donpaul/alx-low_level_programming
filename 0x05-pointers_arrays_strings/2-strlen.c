#include "main.h"
/**
 * _strlen - returns length of string
 * @s: char
 *
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
