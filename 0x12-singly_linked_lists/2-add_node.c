#include "lists.h"
#include <string.h>

/**
  * add_node - adds a node to the beginning of a list_t list
  * @head: pointer to head
  * @str: str for the node
  * Return: the address of the new element, NULL if failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int i = 0;

	if (!new)
		return (NULL);

	if (!str)
	{
		new->str = NULL;
		new->len = 0;
	}
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
		new->len = i;
	}
	new->next = *head;
	*head = new;

	return (new);
}
