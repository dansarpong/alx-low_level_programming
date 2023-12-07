#include "lists.h"

/**
  * delete_dnodeint_at_index - delete the node at index of linked list
  * @head: pointer to the head of the linked list
  * @index: index to the node to be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *track = *head, *prev, *next = NULL;
	unsigned int cur = 0;

	if (!head || !(*head))
		return (-1);

	while (cur != index && track)
	{
		prev = track;
		track = track->next;
		cur++;
	}

	if (cur != index || !track)
		return (-1);

	next = track->next;
	free(track);
	if (index == 0)
	{
		*head = next;
		return (1);
	}
	if (next)
		next->prev = prev;
	prev->next = next;

	return (1);
}
