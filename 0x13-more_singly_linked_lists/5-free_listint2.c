#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdarg.h>
#include <string.h>
/**
 * free_listint2 - function that frees lists
 * @head: pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *new;

	if (head == NULL)
		return;

	temp = *head;
	while (temp)
	{
		new = temp->next;
		free(temp);
		temp = new;
	}
	*head = NULL;
}
