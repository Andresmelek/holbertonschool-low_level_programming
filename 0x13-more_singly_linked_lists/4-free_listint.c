#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdarg.h>
#include <string.h>
/**
 * free_listint - function that frees lists
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp, new;

	temp = new;
	while (temp)
	{
		new = temp->next;
		free(temp);
		temp = new;
	}
}
