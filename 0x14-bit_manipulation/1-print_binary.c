#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @q: The number to be printed in binary
 */
void print_binary(unsigned long int q)
{
	if (q > 1)
		print_binary(q >> 1);
	_putchar((q & 1) + '0');
}
