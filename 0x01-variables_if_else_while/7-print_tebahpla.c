#include<stdio.h>
/**
 * main - print alphabets in reverse.
 *
 * Return: 0
 */
int main(void)
{
	char alphL;

	for (alphL = 'z'; alphL >= 'a'; alphL--)
	{
		putchar(alphL);
	}
	putchar('\n');
	return (0);
}
