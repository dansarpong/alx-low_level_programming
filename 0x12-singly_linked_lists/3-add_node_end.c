#include "lists.h"
#include <string.h>

/**
  * add_node_end - adds a node to the end of a list_t list
  * @head: pointer to head
  * @str: str for the node
  * Return: the address of the new element, NULL if failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t)), *end = *head;
	int i = 0;

	if (!new)
		return (NULL);

	if (!str)
		new->str = NULL;
	else
	{
		new->str = strdup(str);
		if (!(new->str))
		{
			free(new);
			return (NULL);
		}
		for (; new->str[i] != '\0'; i++)
			;
	}
	new->len = i;
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
