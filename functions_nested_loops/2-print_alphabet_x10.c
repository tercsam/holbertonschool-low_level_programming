#include <stdio.h>

/**
 * main - Entry point
 *
 * Return 0 (Success)
 */

int main(void)

{
	char letter;
	int count = 0;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			putchar(letter);
	}
		putchar('\n');

		return (0);

	}	
