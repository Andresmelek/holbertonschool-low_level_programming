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
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		free(head->str);
		free(temp);
		head = head->next;
	}
}
