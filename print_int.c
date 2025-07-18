#include "main.h"
#include <limits.h>

/**
 * print_int - prints an integer
 * @args: argument list
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int len = 0;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		len++;
		if (n == INT_MIN)
		{
			num = (unsigned int)(INT_MAX) + 1;
		}
		else
		{
			num = -n;
		}
	}
	else
	{
		num = n;
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

