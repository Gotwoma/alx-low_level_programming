#include "main.h"
/**
 * print_number - prints an integer
 * @n: number entered
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
