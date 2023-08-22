#include "main.h"
/**
 * print_str - it prints a str
 * @pa: the pointer arg
 * @sum: the sum.
 * Return: sum of printed num in the func.
*/
int print_str(va_list *pa, int sum)
{char *s = va_arg(*pa, char *);

	sum = 0;
	if (s == NULL)
		s = "(null)";
	write(1, s, strlen(s));
	sum += strlen(s);
	return (sum);
}
