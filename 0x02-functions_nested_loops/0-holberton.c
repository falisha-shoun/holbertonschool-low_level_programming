#include "holberton.h"
/**
 * main - prints Holberton
 * Return - 0 value. 
 */
int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
