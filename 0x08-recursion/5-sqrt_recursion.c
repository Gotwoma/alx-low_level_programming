#include "main.h"

int square_root(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 *
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

/**
 * square_root - find natural square root of a number through recursion
 * @n: number
 * @i: number to use to calculate
 *
 * Return: square root
 */
int square_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_root(n, i + 1));
}
