#include "lists.h"
/**
  * print_listint - a function that print out the elements in a linked list
  * @h: a pointer to the start of the linked list
  * Return: returns the number of nodes in the list
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *head = h;

	while (head)
	{
		printf("%d", head->n);
		head = head->next;
		count++;
	}

	return (count);
}

