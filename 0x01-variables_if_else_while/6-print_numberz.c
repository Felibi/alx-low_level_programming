#include <stdio.h>
/**
 * main - display 0-9 with putchar.
 *
 * Return: 0
 */
int main(void)
{
	int b10;

	for (b10 = 0; b10 < 10; b10++)
	{
		putchar("%i", b10);
	}
	putchar('\n');
	return (0);
}
