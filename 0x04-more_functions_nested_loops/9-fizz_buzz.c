#include <stdio.h>

/**
 * main - Prints 1-100.
 *   3 multiples prints Fizz.
 *   5 multiples prints Buzz.
 *   3 & 5 multiples prints FizzBuzz.
 * Return: 0 value.
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
