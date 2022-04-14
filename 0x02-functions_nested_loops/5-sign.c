alx-low_level_programming/0x02-functions_nested_loops/5-sign.c
@Chikeiho
Chikeiho 5 sign
Latest commit 2ad576b on Mar 16
 History
 1 contributor
Executable File  31 lines (28 sloc)  430 Bytes
   
#include "main.h"

/**
 * print_sign - Check Holberton
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
© 2022 GitHub, Inc.
Term
