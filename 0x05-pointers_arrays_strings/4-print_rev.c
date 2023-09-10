#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev -  function that prints a string
 * @s: string
 */
void print_rev(char *s)
{
	int i;
	int length = strlen(s);

	if (s == NULL)
		return;

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
