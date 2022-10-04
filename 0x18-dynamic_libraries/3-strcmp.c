#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1.
 * @s2: string 2.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */
int _strcmp(char *s1, char *s2)
{
	int j  = 0, op = 0;

	while (op == 0)
	{

		if ((*(s1 + j) == '\0') && (*(s2 + j) == '\0'))
			break;

		op = *(s1 + j) - *(s2 + j);
		j++;

	}

	return (op);

}
