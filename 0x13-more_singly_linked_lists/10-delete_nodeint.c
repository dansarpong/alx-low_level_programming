#include "lists.h"

/**
  * delete_nodeint_at_index - delete node at index
  * @head: pointer to head
  * @index: index
  * Return: 1 if successful, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *next;
	unsigned int i;

	if (!(*head) || !head)
		return (-1);

	if (index == 0)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	next = *head;
	for (i = 0; (i < index - 1) && next; i++)
		next = next->next;

	if (next && next->next)
	{
		cur = next->next;
		next->next = cur->next;
		free(cur);
		return (1);
	}

	return (-1);
}
