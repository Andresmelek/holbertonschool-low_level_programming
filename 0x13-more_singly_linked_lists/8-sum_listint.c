#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: pointer to the first node
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp =  temp->next;
	}
	return (sum);
}
