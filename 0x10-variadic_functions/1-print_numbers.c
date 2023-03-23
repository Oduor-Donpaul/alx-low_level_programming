#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of args
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;
	int number;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(ap, int);
		if (separator != NULL && i != n - 1)
			printf("%d%s", number, separator);
		else
			printf("%d", number);
	}
	va_end(ap);
	printf("\n");
}
