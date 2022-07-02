#include <stdio.h>
/**
* main - Prints alphabets in lower case
* Description: 'This will print lowercase letters in reverse'
* Return: Always 0.
*/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
