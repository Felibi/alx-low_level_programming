#include <stdio.h>
/**
 * main - print all possible combinations of single digits.
 *
 * Return: 0
 */
int main(void)
{
	int sd = '0';

	while (sd <= '9')
	{
		putchar(sd);
		putchar(',');
		putchar(' ');
		sd++;
	}
	putchar('\n');
	return (0);
}
