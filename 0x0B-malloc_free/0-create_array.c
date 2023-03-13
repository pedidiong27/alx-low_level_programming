#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of the array
 * @c: storage char
 * Return: pointer of the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	return (NULL);

	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
