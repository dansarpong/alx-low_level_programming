#include "lists.h"

/**
  * reverse_listint - reverses a linkedint_t list
  * @head: pointer to head
  * Return: pointer to first node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;

	if (!(*head) || !((*head)->next))
		return (*head);

	next = reverse_listint((*head)->next);
	(*head)->next->next = *head;
	(*head)->next = NULL;

	return (next);
}
