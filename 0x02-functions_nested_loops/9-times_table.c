#include "main.h"
/**
 * times_table - print 9 times table starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		_putchar('0');
		for (a = 1; a < 10; a++)
		{
			int m = a * b;

			_putchar(',');
			if (m / 100 == 0)
			{
				_putchar(32);
			}
			else if (m / 10 == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar('0' + (m / 10));
			}
			if (m % 10 == 0)
			{
				 _putchar('0');
			}
			else
			{
				_putchar('0' + (m % 10));
			}
		}
		_putchar('\n');
	}
}

