#include "main.h"

/**
 * times_table - Prints nine times table
 * Return: 0 Success
 */
void times_table(void)
{
	int right, left, prod;

	for (right = 0; left <= 9; right++)
	{
		_putchar('0');
		for (left = 1; left <= 9; left++)
		{
			_putchar(',');
			_putchar(' ');
			prod = right * left;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');

		}

		_putchar('\n');

	}

}
