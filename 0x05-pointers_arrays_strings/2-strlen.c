#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to check
 * Return: Length of string
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
