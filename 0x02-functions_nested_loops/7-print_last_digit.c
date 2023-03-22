#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints last digit of a number
 *
 * Return: 1 if true, 0 if false
 *
 */
int print_last_digit(int r)
{
	_putchar('0' + _abs(r % 10));
	return (_abs(r % 1));
}
