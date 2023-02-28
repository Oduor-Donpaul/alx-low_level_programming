#include "main.h"
/**
 * rev_string - reverses string
 * @s: char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i]) != '\0')
		{
			i++;
		}
	}
	while (s[i])
	{
		i--;
	}
}
