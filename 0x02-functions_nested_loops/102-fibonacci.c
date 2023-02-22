#include <stdio.h>
/**
 * main - entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 1, num_one = 1, num_two = 2, num_next;

	while (num <= 50)
	{
		if (num == 1)
		{
			printf("%d", num_one);
		} else if (num == 2)
		{
			printf(", %d", num_two);
		} else
		{
			num_next = num_one + num_two;

			 printf(", %d", num_next);
		}
		num_one = num_two;
		num_two = num_next;
		num++;
	}
	printf("\n");
	return (0);
}
