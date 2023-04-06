#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * @q: The number.
 * @p: The number to flip q to.
 * Return: The necessary number of bits to flip to get from q to p.
 */
unsigned int flip_bits(unsigned long int q, unsigned long int p)
{
	unsigned int flip = 0, comp, comp1;

	while (!(q == 0 && p == 0))
	{
		comp = q & 1;
		comp1 = p & 1;
		q = q >> 1;
		p = p >> 1;
		if (comp != comp1)
			flip += 1;
	}
	return (flip);
}
