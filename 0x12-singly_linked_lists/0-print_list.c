#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - print all elements of a list_t list
 * @h: pointer to list.
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t p_l = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		p_l++;
	}
	return (p_l);
}
