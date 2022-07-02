#include <stdio.h>
/**
* main - Prints alphabets in lower case
* Description: 'This will exclude alphabets q and e'
* Return: Always 0.
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{		
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}	
	putchar('\n');
	return (0);
}
