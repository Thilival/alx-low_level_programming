#include <stdio.h>
/**
 * main - entry point
 * description: program that prints the alphabet in lowercase
 * Return: 0 always
 */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
