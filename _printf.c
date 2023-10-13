#include "main.h"

static void type_checker(char c, va_list var, int *p)
{
	if (c == 'c')
		_putchar(va_arg(var, int), p);
	else if (c == 's')
		putstr(va_arg(var, char *), p);
	else if (c == 'd' || c == 'i')
		putnbr(va_arg(var, int), p);
	else if (c == 'u')
		putnbr_u(va_arg(var, unsigned int), p);
	else if (c == 'p')
		print_pointer(va_arg(var, unsigned long int), p, c);
	else if (c == 'x' || c == 'X')
		putnbr_hex(va_arg(var, unsigned long int), p, c);
	else if (c == '%')
		_putchar('%', p);
	else
		_putchar(c, p);
}

/**
 * _printf - Produces output according to a format
 * @format: A character string
 * Return: Number of characters printed
 */
int _printf(const char *str, ...)
{
	int i;
	va_list var;
	int len;

	len = 0;
	i = -1;
	va_start(var, str);
	while (str[++i])
	{
		if (str[i] == '%' && !str[i + 1])
			break;
		else if (str[i] == '%')
		{
			i++;
			type_checker(str[i], var, &len);
		}
		else
			_putchar(str[i], &len);
		if (len == -1)
			return (-1);
	}
	va_end(var);
	return (len);
}
