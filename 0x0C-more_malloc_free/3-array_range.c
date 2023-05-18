#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create an array of integers
 * @min: first value
 * @max: last value
 *
 * Return: pointer to memory
 */
int *array_range(int min, int max)
{
	int *arr;
	int n;

	if (min > max)
		return (NULL);
	n = max - min;
	arr = malloc(sizeof(int) * (n + 1));
	if (!arr)
		return (NULL);
	while (max > min)
	{
		arr[n] = max;
		n--;
		max--;
	}
	arr[n] = min;
	return (arr);
}
