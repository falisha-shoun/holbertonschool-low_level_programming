#include <stdio.h>
/**
 * main - Printing all letters but q and e.
* Return: 0 value.
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
