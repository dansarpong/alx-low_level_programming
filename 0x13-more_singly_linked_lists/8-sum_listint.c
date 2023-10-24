#include "lists.h"

/**
  * sum_listint - sum all the data of listint_t list
  * @head: pointer to head
  * Return: result, 0 if empty
  */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);

	return (head->n + sum_listint(head->next));
}
