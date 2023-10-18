#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char number;
	char base16;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	for (base16 = 'a'; base16 <= 'f'; base16++)
		putchar(base16);

	putchar('\n');

	return (0);

}
