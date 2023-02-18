#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * in ascending order, separated by ,, followed by a space.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = '8'; n <= 16; n++)
	{
		for (m = '9'; m <= 17; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 16 || m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

