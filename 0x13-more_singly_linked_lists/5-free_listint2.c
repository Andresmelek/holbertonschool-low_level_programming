#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdarg.h>
#include <string.h>
/**
 * free_list - function that frees lists
 * @head: pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head == NULL)
	{
		temp = *head;
		free(temp);
		temp = temp->next;
	}
	*head = NULL;
}
