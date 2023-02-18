#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; n++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

