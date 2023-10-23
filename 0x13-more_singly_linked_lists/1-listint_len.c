#include "lists.h"

/**
  * listint_len - get number of elements in listint_t list
  * @h: pointer to head
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);

	return (1 + listint_len(h->next));
}
