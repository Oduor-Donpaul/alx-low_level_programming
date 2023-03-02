#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;
	int s1_value = 0, s2_value = 0;
	int diff = 0, d1 = 0;

	while (s1[i])
	{
		s1_value += s1[i];
		i++;
	}
	while (s2[j])
	{
		s2_value += s2[j];
		j++;
	}
	if (s1_value > s2_value)
	{
		d1 = s1_value - s2_value;
		return (d1);

	} else if (s1_value < s2_value)
	{
		diff = s1_value - s2_value;
		return (diff);
	}
	return (0);
}
