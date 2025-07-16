#include "main.h"
#include <stdarg.h>

/**
 * _printf - custom printf function that handles %c, %s, %%
 * @format: the format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);

			if (format[i] == 'c')
			{
				char c = va_arg(args, int);
				count += _putchar(c);
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char *);
				int j = 0;

				if (!str)
					str = "(null)";

				while (str[j])
				{
					count += _putchar(str[j]);
					j++;
				}
			}
			else if (format[i] == '%')
			{
				count += _putchar('%');
			}
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (count);
}

