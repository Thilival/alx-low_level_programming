#include <stdio.h>
/**
 * main - entry point
 * description: prints all possible combinations of two two-digit numbers
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(' ');
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);
			if (i == 98 && j == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
