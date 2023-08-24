#include "lists.h"

/**
  * print_list - a function to print elements of a linked list
  * @h: a pointer to the starting address of the list
  * Return: returns the total no of elements in the list
 */
size_t print_list(const list_t *h)
{

	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] %s\n", h->len, h->str);
			h = h->next;
			counter++;
		}
		else
		{
			printf("[0] (nil)\n");
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
