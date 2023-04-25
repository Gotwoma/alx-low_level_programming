#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number entered to find the last digit
 *
 * Return: Last digit of the number
 */
int print_last_digit(int n)
{
	a = n % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
