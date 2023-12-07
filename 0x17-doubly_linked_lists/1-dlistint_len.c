#include "lists.h"

/**
  * dlistint_len - finds the number of elements in a linked dlistint_t list
  * @h: pointer to the head of the linked list
  * Return: the number of elements in a linked dlistint_t list
  */
size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);
	return (dlistint_len(h->next) + 1);
}
