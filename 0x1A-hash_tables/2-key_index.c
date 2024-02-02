#include "hash_tables.h"

/**
* key_index - gives index of a key based on the size of the array
* @key: input key
* @size: size of the hash table (array)
* Return: index to store the key/value pair in the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int output, index;

output = hash_djb2(key);
index = output % size;

return (index);
}

