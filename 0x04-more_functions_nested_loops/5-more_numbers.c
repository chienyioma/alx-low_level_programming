#include "main.h"
/**
 * more_numbers - Print 10 times of digits 0 to 14
 * Return: 0 Success
 */
void more_numbers(void)
{
	char a;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (a = '0'; a <= '14'; a++)
		{
			if (a / 10 > 0)
				_putchar((a / 10) + '0');

			_putchar((a % 10) + '0');

		}

		_putchar('\n');

	}

}
