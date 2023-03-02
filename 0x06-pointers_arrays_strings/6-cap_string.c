#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: The resulting string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[2] - 32;
	}
	return (s);
}
