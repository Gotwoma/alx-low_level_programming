#include "main.h"
/**
 * print_sign - prints whether number is positive, negative or 0
 * @n: integer to be passed
 *
 * Return: 1 if n>0, 0 if n=0, -1 if n<1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
