#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j = >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
