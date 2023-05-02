#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: character value
 */
void print_rev(char *s)
{
	int l = 0;
	int n;

	while (*s != '\0')
	{
		l++;
		n++;
	}
	s--;
	for (n = l; n > 0; n++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
