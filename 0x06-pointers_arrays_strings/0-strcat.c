#include "main.h"
/**
 * *_strcat - concatenate two 2 strings
 * @dest: first string
 * @src: string to be appended to dest string
 *
 * Return: pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int a1 = 0;
	int a2 = 0;

	while (dest[a1] != '\0')
	{
		a1++;
	}
	while (src[a2] != '\0')
	{
		dest[a1 + a2] = src[a2];
		a2++;
	}
	dest[a1 + a2] = '\0';
	return (dest);
}
