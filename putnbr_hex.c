#include "main.h"

/**
 * putnbr_hex - Prints a hexadecimal
 * @num: input
 * @p: input
 * @c: input
 * Return: 0
 */
void putnbr_hex(unsigned int num, int *p, char c)
{
	if (num < 16 && c == 'X')
		_putchar("0123456789ABCDEF"[num], p);
	else if (num < 16 && c == 'x')
		_putchar("0123456789abcdef"[num], p);
	else
	{
		putnbr_hex(num / 16, p, c);
		putnbr_hex(num % 16, p, c);
	}
}
