#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string to be searched
 * @accept: second string to be searched
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such bytes is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
