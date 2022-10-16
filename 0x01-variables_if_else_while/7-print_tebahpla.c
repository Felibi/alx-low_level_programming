#include<stdio.h>
/**
 * main - print alphabets in reverse.
 *
 * Return: 0
 */
int main(void)
{
	int alphL;

	for (alphL = 'z'; alphL >= 'a'; alphL--)
	{
		putchar("%c", alphL);
	}
	putchar('\n');
	return (0);
}
