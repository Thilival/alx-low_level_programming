#include <stdio.h>
#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int isNegative = 0;
	int reversedNumber = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		isNegative = 1;
		n = -n;
	}

	while (n > 0)
	{
		reversedNumber = reversedNumber * 10 + n % 10;
		 n /= 10;
	}

	if (isNegative)
	{
		_putchar('-');
	}

	while (reversedNumber > 0)
	{
		int digit = reversedNumber % 10;

		_putchar('0' + digit);
		reversedNumber /= 10;
	}
}
