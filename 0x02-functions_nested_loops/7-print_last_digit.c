#include "holberton.h"
/**
 * print_last_digit - Shows last digit.
 * @n: find last digit.
 * Return: prints last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar(n % 10 + '0');
	return (n % 10);
}
