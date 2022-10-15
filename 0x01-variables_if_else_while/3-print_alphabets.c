#include <stdio.h>
/**
 * main - display alphabets in lowercase and uppercase.
 *
 * Return:0
 */
int main(void)
{
	char alph = 'a';
	char alphBIG = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (alphBIG <= 'Z')
	{
		putchar(alphBIG);
		alphBIG++;
	}
	putchar('\n');
	return (0);
}
