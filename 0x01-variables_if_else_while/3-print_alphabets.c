#include <stdio.h>
/**
* main - Prints alphabets in lower case
* Description: 'This will print alphabets in lower and upper case'
* Return: Always 0.
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
