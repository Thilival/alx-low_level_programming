#include <stdio.h>
/**
 * main - entry point
 * description: prints all single digit numbers of base 10 starting from 0
 * Return: 0 alway
 */
int main(void)
{
	char digit = '0';

	for (; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
