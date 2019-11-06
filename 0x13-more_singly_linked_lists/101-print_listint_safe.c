#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp[500];
	size_t i, count;

	if (head == NULL)
		exit(98);

	count = 0;
	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (temp[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
					return (count);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		temp[count] = head;
		count++;
		head = head->next;
	}
	return (count);
}
