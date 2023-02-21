#include "main.h"
/**
 * _islower - checks if argument is lowercase
 *@input: int
 *
 * Return: 1 if argument is lowercase
 * otherwise, 0
 */
int _islower(int input)
{
	if (input >= 'a' && input <= 'z')
	{
		return (1);
	}
	return (0);
}
