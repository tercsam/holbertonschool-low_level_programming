#include <stdio.h>

/**
 * main - Entry point
 *
 * Return 0 (Success)
 */

void print_alphabet_x10(void)

{
	char letter;
	int count = 0;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
		putchar('\n');
	}


	}
