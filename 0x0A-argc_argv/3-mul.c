#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if argc == 2
 * 0 otherwisw
 */
int main(int argc, char* argv[])
{
	int i, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	} else 
	{
		result = 1;

		for (i = 1; i < argc; i++)
		{

			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
