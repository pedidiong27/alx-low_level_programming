#include "main.h"

/**
 *  get_bit - Gets the value of a bit at a given index.
 *  @q: The bit
 *  @index: The index to get the value at - indices start at 0.
 *  Return: If an error occurs - -1.
 */

int get_bit(unsigned long int q, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (q & 1);
	}
	return (get_bit(q >> 1, index - 1));

}
