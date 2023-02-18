#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * separated by ,, followed by a space.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 8; n < 18; n++)
	{
		putchar(n);
		if (n != 17)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
