#include <stdio.h>
/**
 * main - entry point
 * description: prints all single digit numbers of base 10 starting from 0
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');

	return (0);
}

