#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *val_cop;
	unsigned long int ind_ex, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cop = strdup(value);
	if (val_cop == NULL)
		return (0);

	ind_ex = key_index((const unsigned char *)key, ht->size);
	for (x = ind_ex; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = val_cop;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_cop);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val_cop;
	new->next = ht->array[ind_ex];
	ht->array[ind_ex] = new;

	return (1);
}
