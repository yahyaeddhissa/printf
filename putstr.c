#include "main.h"

/**
 * putstr - Prints a string
 * @s: String to print
 * @p: Pointer to length of the string
 * Return: 0
 */
void putstr(char *s, int *p)
{
	int i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		_putchar(s[i], p);
		i++;
	}
}
