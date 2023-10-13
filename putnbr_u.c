#include "main.h"

/**
 * putnbr_u - Prints anumber
 * @nb: Number to print
 * @p: Pointer to length
 * Return: 0
 */
void putnbr_u(unsigned int nb, int *p)
{
	if (nb < 10)
		_putchar(nb + '0', p);
	else
	{
		putnbr_u(nb / 10, p);
		putnbr_u(nb % 10, p);
	}
}
