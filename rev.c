#include "main.h"
/**
 * print_rev - it prints a rev
 * @pa: the pointer arg
 * @sum: the sum.
 * Return: sum of printed num in the func.
*/
int print_rev(va_list *pa, int sum)
{int i;
	char *r_str = va_arg(*pa, char *);
	int len;

	sum = 0;
	if (r_str == NULL)
	{
		r_str = ")Null(";
		sum += strlen(r_str);
		return (sum);
	}
	len = strlen(r_str);
	for (i = (len - 1); i >= 0; i--)
	{
		write(1, &r_str[i], 1);
		sum++;
	}
	return (sum);
}

