#include "hash_tables.h"
/**
 *hash_table_print - adds an ellement to a hash table
 *@ht: hash table to be updated
 *Return: value associated with key
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i, flag = 0;

	if (ht == NULL)
		exit(0);

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag == 0)
				printf("'%s': '%s'", tmp->key, tmp->value);
			else if (flag == 1)
				printf(", '%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
