#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of located substring or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b, c;

	a = 0;
	b = 0;
	c = 0;
	while (haystack[a] != '\0')
	{
		if (needle[b] == haystack[a])
		{
			c = 1;
			b++;
		}
		else
		{
			c = 0;
			b = 0;
		}
		if (needle[b] == '\0' && c == 1)
			return ((haystack + a - b + 1));
		else if (needle[b] == '\0' && c == 0)
			return (haystack);
		a++;
	}
	return (0);
}

