#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase 10 times'
 * Return: 0 Success
 */

void print_alphabet_x10(void);
{
	char ch;
	int a;

	for (a = 1; a <= 10; a++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}

