#include "main.h"
/**
 * factorial - returns factorial ofa given number
 * @n: number
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
