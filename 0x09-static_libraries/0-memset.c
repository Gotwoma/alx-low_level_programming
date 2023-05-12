#include "main.h"
/**
 * _memset - fill memory with a constant byte.
 * @s: pointer to memory
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: A pointer to memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
