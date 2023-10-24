#include "lists.h"

/**
  * insert_nodeint_at_index - inserts new node at a given position
  * @head: pointer to head
  * @idx: nth node wanted
  * @n: node data
  * Return: address of node, NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = malloc(sizeof(listint_t)), *trck = *head;

	if ((!tmp) || (!head && idx != 0))
		return (NULL);
	tmp->n = n;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}

	for (i = 0; i < idx; i++)
	{
	if (trck == NULL || trck->next == NULL)
	{
		free(tmp);
		return (NULL);
	}
	trck = trck->next;
	}

	tmp->next = trck->next;
	trck->next = tmp;

	return (tmp);
}
