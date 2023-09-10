#include <stdio.h>
/**
 * print_fibonacci -  finds and prints the first 98 Fibonacci numbers
 * Return: void
 */
void print_fibonacci(void)
{
	int count = 0;
	int first = 1;
	int second = 2;
	int next;

		printf("%d, %d, ", first, second);

	for (count = 2; count < 98; count++)
	{
		next = first + second;
		printf("%d", next);

			if (count != 97)
			{
			printf(", ");
			}

		first = second;
		second = next;
	}

	printf("\n");
}
/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	print_fibonacci();
	return (0);
}
