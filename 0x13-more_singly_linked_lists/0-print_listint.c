#include "lists.h"
#include <stdio.h>

/**
  * print_listint - prints elements of listint_t list
  * @h: pointer to list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
