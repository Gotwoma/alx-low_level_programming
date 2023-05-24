#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to function used to compare values
 *
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = size;
	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	while (size--)
	{
		if (cmp(array[i - size]))
			return (i - size);
	}
	return (-1);
}
