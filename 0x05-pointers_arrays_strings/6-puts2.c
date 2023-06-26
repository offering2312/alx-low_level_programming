#include "main.h"

/**
 * puts2 -  function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	x = length - 1;
	for (z = 0; z <= x; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}

