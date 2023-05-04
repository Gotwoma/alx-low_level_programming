#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: copied string
 * @src: string to be copied from
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a1 = 0;

	while (a1 < n && src[a1] != '\0')
	{
		dest[a1] = src[a1];
		a1++;
	}
	for (; a1 < n; a1++)
		dest[a1] = '\0';
	return (dest);
}
