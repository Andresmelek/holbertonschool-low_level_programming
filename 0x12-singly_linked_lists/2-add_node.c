#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdarg.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, count;
	list_t *new;

	new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
	new->str = strdup(str);

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new->len = count;
	new->next = *head;
	*head = new;
	return (new);
}
