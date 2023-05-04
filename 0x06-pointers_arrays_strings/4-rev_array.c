#include "main.h"
/**
 * reverse_array - reverse content of an array of integers
 * @a: integer
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	n--;
	for (j = 0; j < n; j++)
	{
		i = a[j];
		a[j] = a[n];
		a[n] = i;
		n--;
	}
}
