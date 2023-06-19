#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program to print the alphabet in lowercase and then in uppercase
 * Return: Always (0)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
			lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
