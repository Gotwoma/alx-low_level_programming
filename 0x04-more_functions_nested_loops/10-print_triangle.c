#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	k = size - 1;
	for (i = 0; i < size; i++)
	{
		j = 0;

		while (j < (k - i))
		{
			_putchar(32);
			j++;
		}
		l = size - j;
		while (l > 0)
		{
			_putchar('#');
			l--;
		}
		_putchar('\n');
	}
}
