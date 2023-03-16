#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory
 * @old_size: size of new in bytes
 * @new_size: new size in bytes
 * Return: ptr
 * if new_size ==  ol_size, return ptr without change
 * if malloc fails, returns NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
