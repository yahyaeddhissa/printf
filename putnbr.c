#include "main.h"

static void print_ten_base(long int num, int *p)
{
	if (num < 0)
	{
		_putchar('-', p);
		num *= -1;
	}
	if (num < 10)
		_putchar(num + '0', p);
	else
	{
		print_ten_base(num / 10, p);
		print_ten_base(num % 10, p);
	}
}

/**
 * putnbr - Prints a number
 * @number: Number to print
 * @p: Pointer to length of the number
 * Return: 0
 */
void putnbr(long int num, int *p)
{
	print_ten_base(num, p);
}
