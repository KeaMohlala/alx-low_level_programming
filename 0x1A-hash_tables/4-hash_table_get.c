#include "hash_tables.h"
#include <string.h>

/**
* hash_table_get - retrieves value associated with a key from the hash table
* @ht: hash table to serach in
* @key: key associated with the value
* Return: value associated with the element
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *temp;

index = key_index((unsigned char *)key, ht->size);
temp = ht->array[index];

while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
return (temp->value);
temp = temp->next;
}
return ("(null)");
}
