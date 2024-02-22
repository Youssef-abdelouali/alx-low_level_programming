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
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return 0;

    unsigned long int index = key_index((const unsigned char *)key, ht->size);

    // Check if the key already exists
    for (hash_node_t *node = ht->array[index]; node != NULL; node = node->next) {
        if (strcmp(node->key, key) == 0) {
            // Update value
            char *new_value = strdup(value);
            if (new_value == NULL) {
                return 0; // Memory allocation failed
            }
            free(node->value); // Free the previous value
            node->value = new_value;
            return 1;
        }
    }

    // Key doesn't exist, create a new node
    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL) {
        return 0; // Memory allocation failed
    }

    char *new_key = strdup(key);
    char *new_value = strdup(value);
    if (new_key == NULL || new_value == NULL) {
        free(new_node);
        free(new_key);
        free(new_value);
        return 0; // Memory allocation failed
    }

    new_node->key = new_key;
    new_node->value = new_value;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}
