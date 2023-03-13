#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argument count
 * @argv: arguments
 *
 * Rrturn: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int j;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total < 1)
		{
			for (j = 0; j < sizeof(cents[j]); j++)
			{
				if (total >= cents[j])
				{
					count += total / cents[j];
					total = total % cents[j];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
