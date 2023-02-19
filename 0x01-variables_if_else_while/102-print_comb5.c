#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, e, n, m;

	for (d = 48; d <= 57; d++)
	{
		for (e = 48; e <= 57; e++)
		{
			for (n = 48; n <= 57; n++)
			{
				for (m = 48; m <= 57; m++)
				{
				if (((n + m) > (d + e) && n >= d) || d < n)
				{
					putchar(d);
					putchar(e);
					putchar(' ');
					putchar(n);
					putchar(m);

					if (d + e + n + m == 227 && d == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
