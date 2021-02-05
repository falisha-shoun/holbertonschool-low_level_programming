#include <stdio.h>
/**
 * main - Reverse alphabet.
 * Return: 0 value.
*/
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
