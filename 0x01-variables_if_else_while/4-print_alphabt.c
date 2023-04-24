#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all lowercase letters except q and e
 * Return: 0 to indicate success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
