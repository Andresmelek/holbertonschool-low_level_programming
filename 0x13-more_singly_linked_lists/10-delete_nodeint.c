#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index -function that deleted the node at index
 * @head: pointer that points to the first node
 * @index: index of the node that shouldbe deleted
 * Return: Index that should be deleted
 * 1 if is succeded and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete;
	unsigned int i = 1;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (temp == NULL)
			return (-1);
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (-1);
	}
	delete = temp->next;
	temp->next = delete->next;
	free(delete);
	return (1);
}
