#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return the sum of all its parameters.
 * @n: number of aguments.
 * @...: variable number of parameters.
 *
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(val, n);
	for (i = 0; i < n; i++)
		sum += va_arg(val, int);

	va_end(val);
	return (sum);
}
