#include "main.h"

void _putchar(char c, int *p)
{
	*p += write(1, &c, 1);
}
