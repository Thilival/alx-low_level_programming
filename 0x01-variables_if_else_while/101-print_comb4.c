#include <stdio.h>
/**
 * main - entry point
 * descripition:  prints all possible combinations of single-digit numbers
 * Return: 0 always
 */
int main(void)
{
	int i, a, c;

	for (i = 0; i <= 9; i++)
	{
		for (a = i + 1; a <= 9; a++)
		{
			for (c = a + 1; c <= 9; c++)
			{
				putchar(i + 48);
				putchar(a + 48);
				putchar(c + 48);

				if (i == 7 && a == 8 && c == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
