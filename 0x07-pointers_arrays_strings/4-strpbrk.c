#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: pointer to string
 * @accept: string
 *
 * Return: pointer to byte in s or null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return ((s + a));
			b++;
		}
		a++;
	}
	return (0);
}
