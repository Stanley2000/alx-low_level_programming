#include "lists.h"
/**
  * add_nodeint_end - a function to add an element at
  * the end of the linked list
  * @head: the pointer to the linked list
  * @n: the element to be added
  * Return: returns pointer to the last element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *temp = *head;

	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (temp == NULL)
	{
		temp = end;
		return (end);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = end;
	return (end);
}
