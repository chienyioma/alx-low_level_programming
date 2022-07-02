#include <stdio.h>
/**
* main - Prints single digits using putchar
* Description: 'Print all single digit number from 0'
* Return: Always 0.
*/
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10 + '0'));
	putchar('\n');
	return (0);
}
