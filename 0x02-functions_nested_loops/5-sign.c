#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The character to check
 * Return: 1 for positive numbers, -1 for negative numbers and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(+);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(-);
	return (-1);
	}
	else
	{
	_putchar(0);
	return (0);
	}
}
