




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
