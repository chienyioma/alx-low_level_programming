#include <stdio.h>

/**
 * main - Prints prime numbers
 * Return: Always 0
 */
int main(void)
{
	long int i = 612852475143;
	long int py;

	for (py = 2; py < i; py++)
	{
		if (i % py == 0)
		{
			i = i / py;
		}

	}
	printf("%1d\n", py);

	return (0);

}
