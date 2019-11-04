#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index -  function that returns the nth node of a list
 * @head: pointer to the first node
 * @index: index of the element to be printed
 * Return: The ntth element to bre printed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
