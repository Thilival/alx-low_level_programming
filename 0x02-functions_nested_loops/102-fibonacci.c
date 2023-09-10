#include <stdio.h>
/**
 * main - entry point
 * description: prints the first 50 Fibonacci numbers
 * Return: 0 always
 */
int main(void)
{
	int count;
	unsigned long long first = 1;
	unsigned long long second = 2;
	unsigned long long next;

	 printf("%llu, %llu", first, second);

	for (count = 2; count < 50; count++)
		{
		next = first + second;
		printf(", %llu", next);

			first = second;
			second = next;
		}

	printf("\n");
	return (0);
}
