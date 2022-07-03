#include <stdio.h>
/**
* main - Print all combinations of two digits
* Description: 'Possible combinations of two digits'
* Return: Always 0.
*/
int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '8'; tens++)
	{
		for (ones = '1'; ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);
			if (!(tens == '8' && ones == '9'))
			{
				putchar(',');
				putchar(' ');
			}

		}

	}
	putchar('\n');

	return (0);
}
