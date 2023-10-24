#include "lists.h"

/**
  * get_nodeint_at_index - get nth node of listint_t list
  * @head: pointer to head
  * @index: nth node wanted
  * Return: address of node, NULL if not found
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *trck = head;

	if (!head)
		return (NULL);

	for (i = 0; (i != index) && (trck->next); i++)
		trck = trck->next;
	if (i == index)
		return (trck);
	return (NULL);
}
