#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: character value
 */
void print_rev(char *s)
{
	int n;

	while (*(s + n) != '\0')
	{
		n++;
	}
	while (n--)
	{
		_putchar(*(s + (n)));
	}
	_putchar('\n');
}
