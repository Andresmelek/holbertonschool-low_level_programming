#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - function that prints a linked list
 * @h: double pointer to the first node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *temp[500];
	size_t i, count;

	if (head == NULL)
		return (0);

	count = 0;
	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
		if (temp[i] == head)
			return (count);
		}
		temp[count] = head;
		count++;
		head = head->next;
		free(temp);
	}
	return (count);
}
