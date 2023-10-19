#include "lists.h"
#include <stdio.h>

/**
  * print_list - print all the elements of a list_t list
  * @h: pointer to header
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	if (!h)
		return (0);

	if (!(h->str))
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	return (1 + print_list(h->next));
}
