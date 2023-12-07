#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: pointer to the head of the linked list
  * @n: data for the new linked list to be added
  * Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *temp = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!(*head))
		return (new);
	while (temp->next)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;

	return (new);
}
