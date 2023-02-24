#include <stdio.h>
#include <math.h>
/**
 * main - prints larhest prime number
 *
 * Return: Always 0
 */
int main(void)
{
	long x = 612852475143;

	long f = 2;

	while (f * f <= x)
	{
		if (x % f == 0)
		{
			x /= f;
		} else
		{
			f++;
		}
	}
	if (x > f)
	{
		f = x;
	}
	printf("%ld\n", f);

	return (0);
}
