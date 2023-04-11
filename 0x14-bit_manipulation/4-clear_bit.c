#nclude "main.h"
/**
 * clear_bit - sets the value of a bit to zero at index
 * @n: unsigned int
 * @index: index
 * Return: 1 if success, otherwisw 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
