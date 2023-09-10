#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string
 * @str: string
 */
void _puts(char *str)
{
	int i;

	if (str == NULL)
		return;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	_putchar('\n');
}
