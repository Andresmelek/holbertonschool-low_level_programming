#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdarg.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *temp = *head, *new;

	new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
