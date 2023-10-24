#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t list
  * @head: pointer to head
  * Return: head node's data, 0 if empty
  */
int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *ded;

	if (!(*head))
		return (0);

	ded = *head;
	tmp = ded->n;
	*head = (*head)->next;
	free(ded);
	return (tmp);
}
