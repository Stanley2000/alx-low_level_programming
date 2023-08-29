#include "lists.h"
/**
  * insert_nodeint_at_index - a function to insert an element at
  * a particular index in a linked list
  * @head: a pointer to the linked list
  * @idx: the index position to add an element
  * @n: the element to be added
  * Return: returns the pointer to the new added node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i = 0;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp->next && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (i == idx - 1)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
