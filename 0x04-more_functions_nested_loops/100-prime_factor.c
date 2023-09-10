#include <stdio.h>
#include <math.h>
/**
 * largest_prime_factor - finds and prints the
 * largest prime factor of the number
 * @num: the longest number
 * Return: largestFactor
 */
long largest_prime_factor(long num)
{
	long largestFactor = -1;
	long factor;

	while (num % 2 == 0)
	{
		largestFactor = 2;
		num /= 2;
	}

	for (factor = 3; factor <= sqrt(num); factor += 2)
	{
		while (num % factor == 0)
		{
			largestFactor = factor;
			num /= factor;
		}
	}

	if (num > 2)
	{
		largestFactor = num;
	}

	return (largestFactor);
}
/**
 * main - entry point
 * description: finds and prints the largest
 * prime factor of the number
 * Return: 0 always
 */
int main(void)
{
	long number = 612852475143;
	long largestFactor = largest_prime_factor(number);

	printf("%ld\n", largestFactor);

	return (0);
}
