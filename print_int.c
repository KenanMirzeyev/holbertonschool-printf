#include "main.h"

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last_digit = n % 10, digit, pow = 1, len = 0;

	n /= 10;
	if (n == 0)
	{
		if (last_digit < 0)
		{
			_putchar('-');
			last_digit *= -1;
			len++;
		}
		_putchar(last_digit + '0');
		return (len + 1);
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		last_digit *= -1;
		len++;
	}

	num = n;
	while (num)
	{
		num /= 10;
		pow *= 10;
	}

	num = n;
	while (pow)
	{
		digit = num / pow;
		_putchar(digit + '0');
		num %= pow;
		pow /= 10;
		len++;
	}

	_putchar(last_digit + '0');
	return (len + 1);
}

