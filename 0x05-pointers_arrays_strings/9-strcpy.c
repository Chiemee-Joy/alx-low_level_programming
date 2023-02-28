#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: string to be copied
 * @dest: pointer to the buffer in which to copy the string
 * Return: The ponter to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
