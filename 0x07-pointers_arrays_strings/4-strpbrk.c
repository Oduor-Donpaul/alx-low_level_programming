#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes of string to be searched
 *
 * Return: pointer that matches one of the byte in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = s;
	char *act;

	while (*ptr)
	{
		act = accept;

		while (*act)
		{
			if (*act == *ptr)
			{
				return (ptr);
			}
			act++;
		}
		ptr++;
	}
	return ('\0');
}
