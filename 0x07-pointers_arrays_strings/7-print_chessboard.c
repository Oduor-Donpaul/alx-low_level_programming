#include "main.h"
/**
 * print_chessboard - prints chesboard
 * @a: multidimensional array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
			if (column == 7)
			{
				_putchar('\0');
			}
		}
	}
}
