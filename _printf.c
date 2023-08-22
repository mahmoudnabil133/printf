#include "main.h"
/**
 * _printf - it prints a format with its argument
 * @format: the first arg passed to func_prints
 * Return: sum of char printed.
*/
int _printf(const char *format, ...)
{int sum = 0, i = 0;
	va_list ap;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			sum++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;
			sum += handle_func(&ap, format[i], sum);
		}
		i++;
	}
	va_end(ap);
	return (sum);
}
