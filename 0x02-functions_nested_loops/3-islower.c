#include "holberton.h"
/**
 * _islower - Checks if char is lowercase alphabet.
 * Return: 1 for lowercase and 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
