#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
