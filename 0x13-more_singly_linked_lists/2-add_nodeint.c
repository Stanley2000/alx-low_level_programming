#include "lists.h"

/**
  * add_nodeint - a function that adds a new element at the first node
  * @head: a pointer to the linked list
  * @n: the value to be added as the first element of the node
  * Return: the pointer to the added item
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
