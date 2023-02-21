#include "main.h"
/**
 * _isalpha - check alphabet
 *
 * Return: 1 if is alphabet
 * 0, otherwise
 */
int _isalpha(int input)
{
	if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
	{
		return 1;
	} else
	{
		return 0;
	}
}
