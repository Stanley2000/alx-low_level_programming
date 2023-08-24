#include "list.h"

/**
  * print_list - a function to print elements of a linked list
  * @h: a pointer to the starting address of the list
  * Return: returns the total no of elements in the list
 */
size_t print_list(const list_t *h)
{
	list_t *current = h;
	int counter = 0;

	while (current->next != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
			current = current->next;
			counter++;
		}
		else
		{
			printf("[0] (nil)\n");
			current = current->next;
			counter++;
		}
	}
	return (counter * 2);
}
