#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list
  * @head: pointer to head of linked list
  */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	free_dlistint(head->next);
	free(head);
}
