#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: length to print
 *
 * Return: 0;
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (j = 0; j < n; j++)
	{
		i = j;
		while (i > 0)
		{
			_putchar(32);
			i--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
