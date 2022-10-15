#include <stdio.h>
/**
 * main - print a-z using putchar.
 *
 * Return: 0
 */
int main(void)
{

	char small_al = 'a';

	while (small_al <= 'z')
	{
		putchar(small_al);
		small_al++;
	}
	putchar('\n');
	return (0);
}
