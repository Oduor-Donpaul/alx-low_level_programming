#include <stdio.h>
/**
 * main - entry
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always success (0)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 1; *argv; i++, argv++)
		{
			;

			printf("%d\n", argc-1); }
	}
	return (0);
}
