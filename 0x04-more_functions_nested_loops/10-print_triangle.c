#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int opp;
	int adj;
	int draw;

	if (size <= 0)
		_putchar('\n');

	for (opp = 1; opp <= size; opp++)
	{
		for (adj = 1; adj <= (size - opp); adj++)
			_putchar(' ');

		for (draw = 1; draw <= height; draw++)
			_putchar('#');

		_putchar('\n');
	}

}
