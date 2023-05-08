#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to character or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	return (0);
}
