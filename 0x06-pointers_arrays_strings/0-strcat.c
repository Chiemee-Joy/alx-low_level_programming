#include "main.h"

 /**
  * *_strcat - concatenates two strings
  * @src: string to be appended
  * @dest: string to append to
  * Return: a pointer to the resultibg string dest
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while  (dest[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
