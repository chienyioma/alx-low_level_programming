#include <stdio.h>
/**
* main - Prints alphabets in lower case
* Description: 'This will print alphabets in small letters'
* Return: Always 0.
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
