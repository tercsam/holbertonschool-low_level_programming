#include "main.h"

/**
 * factorial - Calculates factorial number.
 * @n: number to calculate factorial.
 * Return: factorial number
 */

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int factorial(int n)

{
	if (n == 0 || n == 1)
		return (1);

	if (n > 1)
		return (n * factorial(n - 1));

	else
		return (-1);
}
