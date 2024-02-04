#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: hash table to print
*/

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i, j = 0;
hash_node_t *temp;
char **print_key, **print_value;

if (ht == NULL)
{
return;
}

print_key = malloc(ht->size * sizeof(char *));
if (print_key == NULL)
return;

print_value = malloc(ht->size * sizeof(char *));
if (print_key == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
print_key[j] = temp->key;
print_value[j] = temp->value;
j++;
temp = temp->next;
}
}
for (i = 0; i < j; i++)
{
printf("'%s': '%s'", print_key[i], print_value[i]);
if (i < j - 1)
printf(", ");
}
printf("}\n");

free(print_key);
free(print_value);
}
