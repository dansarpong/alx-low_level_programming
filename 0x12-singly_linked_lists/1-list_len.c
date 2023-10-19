#include "lists.h"

/**
  * list_len - find number of elements in a linked list_t list
  * @h: pointer to head
  * Return: number of linked lists
  */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	return (1 + list_len(h->next));
}
