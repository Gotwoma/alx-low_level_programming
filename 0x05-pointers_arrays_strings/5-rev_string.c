#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int st, t;
	int e = 0;

	while(*(s + e) != '\0')
	{
		e++;
	}
	e -= 1;
	st = 0;
	while (e > st)
	{
		t = s[st];
		s[st] = s[e];
		s[e] = t;
		st++;
		e--;		
	}
}
