#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_binary - prints binary
 * @n: unsigned int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	char c;

	if (n > 1)
		print_binary(n >> 1);

	c = (n & 1) + '0';

	write(1, &c, 1);
}



int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
