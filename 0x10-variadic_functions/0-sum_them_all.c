#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: number of intergers
 * Return: 0 always
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (o);
	}

	int sum = 0;

	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}