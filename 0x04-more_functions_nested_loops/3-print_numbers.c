#include "main.h"

/**
 * print_numbers - Print digits 0 to 9
 * Return: 0 Success
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);

	_putchar('\n');
	return (0);
}
