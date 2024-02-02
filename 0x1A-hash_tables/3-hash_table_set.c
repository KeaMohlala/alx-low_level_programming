#include "hash_tables.h"
#include <string.h>

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table
* @key: hash key
* @value: value associated with key
* Return: 1 on success and 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *element, *current_element;

if (ht == NULL || key == NULL)
return (0);

index = key_index((unsigned char *)key, ht->size);
element = create_item(key, value);

current_element = ht->array[index];
if (current_element == NULL)
ht->array[index] = element;
else
{
if (strcmp(current_element->key, key) == 0)
{
current_element->value = strdup(value);
return (1);
}
else
{
handle_collision(&(ht->array[index]), element);
}
}
return (1);
}

/**
* handle_collision - handles hash table collisions
* @head: pointer to the current head of the index
* @new_node: new element to add to the hash table
*/

void handle_collision(hash_node_t **head, hash_node_t *new_node)
{
new_node->next = *head;
*head = new_node;
}

/**
* create_item - creates new element to add to the hash table
* @key: key to find indeex
* @value: key/value pair
* Return: pointer to created item
*/

hash_node_t *create_item(const char *key, const char *value)
{
hash_node_t *ptr;

ptr = malloc(sizeof(hash_node_t));
if (ptr == NULL)
return (NULL);

ptr->next = NULL;
ptr->key = strdup(key);
ptr->value = strdup(value);

return (ptr);
}
