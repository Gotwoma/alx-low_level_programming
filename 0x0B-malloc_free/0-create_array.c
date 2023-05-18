#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size of array
 * @c: character
 *
 * Return: pointer to array , NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size <= 0)
		return (0);
	ar = malloc(size);
	if (ar == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
