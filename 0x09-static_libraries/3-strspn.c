#include "main.h"
/**
 * _strspn - get length of a prefix of a substring
 * @s: pointer to string
 * @accept: bytes
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i;

	n = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
