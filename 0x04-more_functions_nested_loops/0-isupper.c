#include "holberton.h"

/**
 * _isupper - Uppercase check.
 * @c: char tested.
 * Return: 1 for uppercase else 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
