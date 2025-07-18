#include "main.h"

/**
 * print_int - prints an integer
 * @args: argument list
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int len = 0;
	int divisor = 1;
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		len++;
		num = -num;
	}

	while ((num / divisor) >= 10)
		divisor *= 10;

	while (divisor != 0)
	{
		_putchar((num / divisor) + '0');
		num %= divisor;
		divisor /= 10;
		len++;
	}

	return (len);
}

