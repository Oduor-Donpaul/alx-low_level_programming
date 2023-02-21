#include "main.h"

/**
 * _abs - takes int
 *@input: int
 *
 *  Return: absolute value of the input
 */
int _abs(int input)
{
	if (input < 1)
	{
		input *= -1;
		return (input);
	} else if (input == 0)
	{
		return (0);
	}
	return (input);
}
