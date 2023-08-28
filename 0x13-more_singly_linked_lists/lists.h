#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <stdlib.h>


/**
  * struct listint_s - singly linked list
  * @n: integer
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  *
  */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#endif
