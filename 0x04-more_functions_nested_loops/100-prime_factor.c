#include <stdio.h>

/**
 * main - Prints prime numbers
 * Return: Always 0
 */
int main(void)
{
	long int i = 612852475143;
	long int pn;

	for (pn = 2; pn <= i; pn++)
	{
		if (i % pn == 0)
		{
			i /= pn;
			pn--;
		}

	}
	printf("%1d\n", pn);

	return (0);

}
