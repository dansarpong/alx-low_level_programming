#include "lists.h"

/**
  * get_dnodeint_at_index - finds the nth node of a dlistint_t linked list
  * @head: pointer to the head of the linked list
  * @index: the index of the node, starting from 0
  * Return: returns the nth node of a dlistint_t linked list if it exists,
  * else return NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int cur = 0;

	if (index < 0 || !head)
		return (NULL);

	while (head->next && cur != index)
	{
		head = head->next;
		cur++;
	}
	if (cur == index)
		return (head);
	return (NULL);
}
