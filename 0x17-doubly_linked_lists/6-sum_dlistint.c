#include "lists.h"

/**
  * sum_dlistint - finds the sum of all the data of a dlistint_t linked list
  * @head: pointer to the head of the linked list
  * Return: sum of all the data, if the list is empty return 0
  */
int sum_dlistint(dlistint_t *head)
{
	if (!head)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
