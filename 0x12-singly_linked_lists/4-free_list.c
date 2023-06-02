#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to list_t list
 */
void free_list(list_t *head)
{
	list_t *free_list;

	while (head)
	{
		free_list = head->next;
		free(head->str);
		free(head);
		head = free_list;
	}
}
