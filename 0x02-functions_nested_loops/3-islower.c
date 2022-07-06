#include main.h

/**
 * _islower  - Check for lowercase alphabet
 * @c: The character to check
 * Return: 0 Success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
