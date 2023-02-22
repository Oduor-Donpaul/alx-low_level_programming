#include <stdio.h>
/**
 * main - entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
       	int f = 1;
       	int s = 2;
       	int nextN;

	printf("%d, %d, ", f, s);

	for (i = 3; i <= 98; i++)
	{
		nextN = f + s;
		printf("%d, ", nextN);
		f = s;
		s = nextN;
	}
	printf("\n");

	return (0);
}
