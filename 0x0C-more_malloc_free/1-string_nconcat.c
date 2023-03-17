#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, k, l;
	char *s;

	if (s1 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s1[j]; ++j)
		;
	}
	if (s2 == NULL)
	{
		k = 0;
	}
	else
	{
		for (k = 0; s2[k]; ++k)
		;
	}
	if (k > n)
		k = n;
	s = malloc(sizeof(char) * (j + k + 1));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < j; l++)
		s[l] = s1[l];
	for (l = 0; l < k; l++)
		s[l + j] = s2[l];
	s[j + k] = '\0';
	return (s);
}
