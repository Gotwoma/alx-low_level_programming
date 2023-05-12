#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: final string
 * @src: string to be appended to dest string
 * @n: number of bytes from src string
 *
 * Return: pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a1 = 0;
	int a2 = 0;

	while (dest[a1] != '\0')
	{
		a1++;
	}
	while (a2 < n && src[a2] != '\0')
	{
		dest[a1 + a2] = src[a2];
		a2++;
	}
	dest[a1 + a2] = '\0';
	return (dest);
}
