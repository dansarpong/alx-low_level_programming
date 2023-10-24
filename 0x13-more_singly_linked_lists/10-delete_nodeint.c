#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at index
  * @head: pointer to head
  * @index: index
  * Return: 1 if successful, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *trck;
	unsigned int i;

	if (!(*head) || !head)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	trck = *head;
	for (i = 0; (i < index) && trck; i++)
		trck = trck->next;

	if (trck && trck->next)
	{
		tmp = trck->next;
		trck->next = tmp->next;
		free(tmp);
		return (1);
	}

	return (-1);
}
