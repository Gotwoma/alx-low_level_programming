#include "main.h"
/**
 * *string_toupper - change all lowercase letters to uppercase
 * @s: string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	s[i] = '\0';
	return (s);
}
