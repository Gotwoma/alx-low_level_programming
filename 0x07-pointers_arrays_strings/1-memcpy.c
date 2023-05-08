#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: memory area destination
 * @src: memory area which is copied
 * @n: number of bytes from memory area src to dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
