#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: num of args
 * Return: sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	int sum = 0;

	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
