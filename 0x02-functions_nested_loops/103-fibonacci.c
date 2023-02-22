#include <stdio.h>
/**
 * main - entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int next_num = 0;
	int sum = 2;

	while (next_num <= 4000000)
	{
		next_num = num1 + num2;
		num1 = num2;
		num2 = next_num;
		if (next_num % 2 == 0)
		{
		sum += next_num;
		}
	}
	printf("%d", sum);
	return (0);
}
