#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ to be printed
 */
void print_line(int n)
{
	int places = n;

	if (n > 0)
	{
		for (places = 0; places < n; places++)
			_putchar('_');

	}
	_putchar('\n');

}
