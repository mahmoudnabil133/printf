#include "main.h"
/**
 * print_char - it prints a char
 * @pa: the pointer arg
 * @sum: the sum.
 * Return: sum of printed num in the func.
*/
int print_char(va_list *pa, int sum)
{char c = va_arg(*pa, int);

	sum = 0;
	write(1, &c, 1);
	sum++;
	return (sum);
}
