#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory
 *
 * Return: pointer to memory, 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
