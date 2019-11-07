#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
* find_listint_loop- finds the loop in the linked list
* @head: pointer to the first node
* Return: the address of the node where the loop starts
* or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);
	while (head)
	{
		if ((head->next) >= head)
		{
			return (head->next);
		}
		head = head->next;
	}
	return (NULL);
}
