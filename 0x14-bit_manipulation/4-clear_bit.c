#nclude "main.h"
/**
 * clear_bit - sets the value of a bit to zero at index
 * @n: unsigned int
 * @index: index
 * Return: 1 if success, otherwisw 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int j;
	int bit;

	if (index > 64)
		return (-1);
	for (j = 0; j < 64; j++)
	{
		bit = 1 << index;
		*n = *n & ~bit
	}
	return (1);
}
