#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Entry point
 *@s:nThis is the input string
 *
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);

}


