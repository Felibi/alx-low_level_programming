#include <stdio.h>
#include <stdbool.h>
/**
 * main - display alphabets excluding q and e.
 *
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}

