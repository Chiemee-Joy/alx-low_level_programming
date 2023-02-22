#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting integer
 */
void print_to_98(int n)
{
	int c, d;

	if (n <= 98)
	{
	for (c = n; c <= 98; c++)
	{
		if (c != 98)
			printf("%d, ", c);
		else if (c == 98)
			printf("%d\n", c);
	}
	}
	else if (n >= 98)
	{
	for (d = n; d >= 98; d--)
	{
		if (d != 98)
			printf("%d, ", d);
		else if (d == 98)
			printf("%d\n", d);
	}
	}
}
