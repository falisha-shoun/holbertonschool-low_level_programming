#include "holberton.h"
/**
 * _isalpha - Checks if char is in alphabet upper & lower case.
 * @c: testing c char.
 * Return: 1 returns for char alphabet and 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
