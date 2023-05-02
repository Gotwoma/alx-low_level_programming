#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char c = s[0];
	int n = 0;
	int i;

	while (s[n] != '\0')
	n++;
	for (i = 0; i < n; i++)
	{
		n--;
		c = s[1];
		s[1] = s[n];
		s[n] = c;
	}
}
