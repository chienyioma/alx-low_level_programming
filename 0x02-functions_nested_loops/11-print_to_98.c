#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -Prints to 98
 * @n: Number to begin with
 *Return: 0 Success
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;

	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');

}
