#include "lists.h"

/**
  * free_listint2 - frees a listint_t list
  * @head: pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
