#include <stdio.h>
/**
 * main - entry
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: Always success (0)
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
