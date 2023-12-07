#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: pointer to the head of the linked list
  * @idx: index to insert the data
  * @n: data to be inserted
  * Return: the address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *track = *h, *prev = track, *new = NULL;
	unsigned int cur = 0;

	if (!h)
		return (NULL);

	while (cur != idx && track)
	{
		prev = track;
		track = track->next;
		cur++;
	}

	if (cur != idx)
		return (NULL);

	new = add_dnodeint(&track, n);
	if (!new)
		return (NULL);
	if (prev)
	{
		prev->next = new;
		new->prev = prev;
	}
	else
		*h = new;

	return (new);
}
