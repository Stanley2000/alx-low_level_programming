#include "main.h"
/**
  * add_nodeint_end - a function to add an element at the end of the linked list
  * @head: the pointer to the linked list
  * @n: the element to be added
  * Return: returns pointer to the last element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;

	end = malloc(sizeof(listint_t));
	end->n = n;
	end->next = NULL;

	while (*head->next)
	{
		*head = *head->next;
	}

	*head->next = end;
	return (end);
}
