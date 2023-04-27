#include "main.h"
/**
 * more_numbers - print 0 t0 14 ten times
 *
 * Return: 0;
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		while (j < 15)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			j++;
		}
		_putchar('\n');
	}
}
