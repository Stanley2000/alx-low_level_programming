#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the allocated space in the heap for the list
 * @head: list_t list to be freed like a bird
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
