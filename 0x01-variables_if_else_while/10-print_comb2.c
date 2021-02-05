#include <stdio.h>
/**
 * main - 00 to 99.
* Return: 0 value.
*/
int main(void)
{
	int i = '0';
	int n = '0';

	while (i <= '9')
	{
		while (n <= '9')
		{
			putchar(i);
			putchar(n);
			if (n == '9' && i == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		if (n >= '9')
		{
			n = '0';
		}
		i++;
	}
	return (0);
}
