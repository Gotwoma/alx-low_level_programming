#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * @...: string to print.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);
	while (i < n)
	{
		str = va_arg(strings, char*);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		i++;
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
