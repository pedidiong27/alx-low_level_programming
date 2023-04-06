#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @q: A pointer to the bit
 * @index: The index to set the value at - indices start at 0
 * Return: If an error occurs - -1.
 */
int clear_bit(unsigned long int *q, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*q &= ~(1 << index);
	return (1);
}
