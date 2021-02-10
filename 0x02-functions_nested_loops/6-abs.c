#include "holberton.h"
/**
 * _abs - prints absolute value of int.
 * @i: int tested.
 * Return: absolute value.
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
