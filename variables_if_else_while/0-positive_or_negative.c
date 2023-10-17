#include <stdlib.h>
#include <time.h>

/*
 * more headers goes there
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * betty style doc for function main goes there
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if n > 0 printf("is positive\n")
	if n = 0 printf("is zero\n")
	if n < 0 printf("is negative\n")
	return (0);
}
