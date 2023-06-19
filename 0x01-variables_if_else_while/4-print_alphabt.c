#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints in alphabet lowercase
 * print all except alphabet q and e
 * Return: Always (0)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
		putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
