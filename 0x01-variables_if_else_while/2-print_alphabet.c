#include <stdio.h>
/**
 * main - alphabet in lowercase.
 * Return: 0 value.
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
