#include <stdio.h>
/**
 * main - entry point
 * discription: program that prints the alphabet in lowercase
 * Return: 0 always
 */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
