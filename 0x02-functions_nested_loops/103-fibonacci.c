#include <stdio.h>
/**
 * main - entry point
 * description: adding the previous two terms
 * Return: 0 always
 */
int main(void)
{
	int first = 1;
	int second = 2;
	int next;
	int sum = 2;

	while (second <= 4000000)
	{
		next = first + second;
		if (next % 2 == 0)
		{
			sum += next;
		}
		first = second;
		second = next;
	}

	printf("%d\n", sum);
	return (0);
}
