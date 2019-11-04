#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdarg.h>
#include <string.h>
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head, *new;

	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		(*head = new);
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
