#include "main.h"
/**
 * *_strcpy - copies string to buffer
 * @dest: buffer where string is copied to
 * @src: string pointed to
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
