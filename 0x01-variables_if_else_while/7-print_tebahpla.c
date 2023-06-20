#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints the lowercase in reverse
 * Return: Always (0)
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
