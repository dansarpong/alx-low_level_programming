#include "lists.h"

/**
  * delete_dnodeint_at_index - delete the node at index of linked list
  * @head: pointer to the head of the linked list
  * @index: index to the node to be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *track = *head, *prev = NULL;
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

	if (prev)
		prev->next = track->next;
	else
		*head = track->next;

	if (track->next)
		track->next->prev = prev;

	free(track);
	return (1);
}
