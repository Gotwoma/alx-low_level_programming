#include "function_pointers.h"
/**
 * array_iterator - execute function given as param on each element of array
 * @size: size of the array
 * @action: pointer to the function to use
 * @array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;
	while (size--)
		action(*array++);
}
