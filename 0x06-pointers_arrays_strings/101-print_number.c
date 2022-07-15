#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer input.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int j, d, count;

	if (n < 0)
	{

		_putchar(45);
		j = n * -1;

	}

	else

	{

		j = n;

	}

	d = j;
	count = 1;

	while (d > 9)
	{

		d /= 10;
		count *= 10;

	}

	for (; count >= 1; count /= 10)
	{

		_putchar(((j / count) % 10) + 48);

	}

}
