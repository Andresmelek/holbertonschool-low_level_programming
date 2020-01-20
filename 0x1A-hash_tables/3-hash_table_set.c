#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add_hash;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	add_hash = malloc(sizeof(hash_table_t));
	if (add_hash == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		add_hash->key = strdup(key);
		if ((add_hash)->key == NULL)
			return (0);

		add_hash->value = strdup(value);
		if ((add_hash)->key == NULL)
			return (0);

		add_hash->next = NULL;
		ht->array[index] = add_hash;
		return (1);
	}
	free(add_hash);
	return (update(ht, key, value));
}

/**
 * update - updates or adds a new element to the  hash table
 * @ht:  is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value:  is the value associated with the key. 
 * Return: 1 if it succeeded, 0 otherwise
 */
int update(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *new_hash;
	unsigned long int index = 0;

	new_hash = malloc(sizeof(hash_node_t));
	if (new_hash == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp (key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = ht->array[index];
	(new_hash)->key = strdup(key);
	if (new_hash->key == NULL)
		return (0);

	(new_hash)->value = strdup(value);
	if ((new_hash)->value == NULL)
		return (0);

	(new_hash)->next = tmp;
	ht->array[index] = new_hash;
	return (1);
}
