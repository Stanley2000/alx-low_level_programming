#include "lists.h"

/**
  * free_listint - a function that free the space allocated by
  * malloc to the linked list
  * @head: a pointer to the list
  */

void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head)
	{
		holder = head->next;
		free(head);
		head = holder;
	}
}
