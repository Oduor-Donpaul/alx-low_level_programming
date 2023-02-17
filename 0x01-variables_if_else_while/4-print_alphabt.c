#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while ((c <= 'z') && (c != 'q') && (c != 'e'))
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
