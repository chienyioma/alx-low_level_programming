#include <stdio.h>
/**
* main - Print all combinations of two digits
* Description: 'Possible combinations of two digits'
* Return: Always 0.
*/
int main(void)
{
	int a;
	int n = 0;

	while (n < 10)
	{
		a = 0;

		while (a < 10)
		{
			if (n != a && n < a)
			{

				putchar('0' + n);
				putchar('0' + a);
				if (a + n != 17)
				{
					putchar(',');
					putchar(' ');
				}

			}
			a++;

		}
		n++;

	}
	putchar('\n');

	return (0);
}


