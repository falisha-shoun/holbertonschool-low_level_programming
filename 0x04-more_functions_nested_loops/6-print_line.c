#include "holberton.h"

/**
 * print_line - Prints a line.
 * @n: line size.
 * Return: void.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
