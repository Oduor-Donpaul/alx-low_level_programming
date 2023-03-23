#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints sring followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passsed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *p;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char*);

		if (separator != NULL && i != n-1)
			printf("%s%s", p, separator);
		else
			printf("%s", p);
	}

	va_end(ap);

	printf("\n");
}
