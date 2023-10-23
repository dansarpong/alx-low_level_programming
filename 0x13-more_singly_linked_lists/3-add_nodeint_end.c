#include "lists.h"

/**
  * add_nodeint_end - add new node at the end of list
  * @head: pointer to head
  * @n: num to add
  * Return: address of new element, NULL if failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *end = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!(*head))
		*head = new;
	else
	{
		while (end->next)
			end = end->next;
		end->next = new;
	}

	return (new);
}
