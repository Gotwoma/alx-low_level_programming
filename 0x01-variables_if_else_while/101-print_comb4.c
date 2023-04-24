#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (c = 0; c != 8; c++)
	{
		for (a = c + 1; a != 9; a++)
		{
			b = a + 1;
			do {
				putchar('0' + c);
				putchar('0' + a);
				putchar('0' + b);
				if (c != 7)
				{
					putchar(',');
					putchar(32);
				}
				b++;
			} while (b != 10);
		}
	}
	putchar('\n');
	return (0);
}
