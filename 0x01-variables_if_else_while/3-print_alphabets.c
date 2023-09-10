#include <stdio.h>
/**
 * main - entry point
 * description: prints the alphabet in lowercase, and then in uppercase
 * Return: 0 always
 */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	letter = 'A';

	for (; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
