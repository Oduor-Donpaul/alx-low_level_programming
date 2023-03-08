#include "main.h"
/**
 * _sqrt_helper - finds natural square root of input
 * @num: number
 * @root: root to be tested
 *
 * Return: square root if the number has a natural square root
 *-1 if the number has no natural square root
 */
int _sqrt_helper(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	} else if (root == num / 2)
		return (-1);
	return (_sqrt_helper(num, root + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 *
 * Return: -1 if n does not have a natural square roo
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	} else if (n == 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, root));
}
