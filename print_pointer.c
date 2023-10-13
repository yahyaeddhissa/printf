#include "main.h"

static void put_pointer(unsigned long int num, int *p)
{
	if (num < 16)
		_putchar("0123456789abcdef"[num], p);
	else
	{
		put_pointer(num / 16, p);
		put_pointer(num % 16, p);
	}
}

/**
 * print_pointer - Prints a pointer
 * @num: input
 * @p: input
 * @p: input
 * Return: 0
 */
void print_pointer(unsigned long int num, int *p, char c)
{
	if (c == 'p')
		putstr("0x", p);
	put_pointer(num, p);
}
