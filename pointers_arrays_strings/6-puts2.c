#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * strating with the first character, followed by a new line.
 *
 * @str: This pointer point to a char or string
 */

void puts2(char *str)

{
	int a;

	for (a = O; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}

	}
	_putchar('\n');

}
