#include <stdio.h>
/**
 * main - entry point
 * descripition:  prints all possible combinations of single-digit numbers
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);

		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
