#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *str, ...);
void _putchar(char c, int *p);
void putstr(char *s, int *p);
void putnbr(long int num, int *p);
void print_pointer(unsigned long num, int *p, char c);
void putnbr_hex(unsigned int num, int *p, char c);
void putnbr_u(unsigned int nb, int *p);

#endif
