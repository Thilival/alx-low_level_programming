#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
/**
 * main - entry point
 * description - generates random valid passwords for the program 101-crackme.
 * Return - 0 always success
 */
int main(void)
{
	srand(time(NULL);

	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)

		password[i] = printable_chars[rand() % (sizeof(printable_chars) - 1)];


	password[PASSWORD_LENGTH] = '\0';

	printf("Random Password: %s\n", password);

	return (0);
}
