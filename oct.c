#include "main.h"
/**
 * print_oct - it prints a oct
 * @pa: the pointer arg
 * @sum: the sum.
 * Return: sum of printed num in the func.
*/
int print_oct(va_list *pa, int sum)
{unsigned int oct_num = va_arg(*pa, unsigned int);
	char arr_oct[50];
	int i = 0;

	sum = 0;
	if (oct_num == 0)
	{char zero = '0';
		write(1, &zero, 1);
		sum++;
		return (sum);
	}
	while (oct_num > 0)
	{
		arr_oct[i] = (oct_num % 8) + '0';
		oct_num /= 8;
		i++;
	}
	i -= 1;
	while (i >= 0)
	{char s = arr_oct[i];
		write(1, &s, 1);
		sum++;
		i--;
	}
	return (sum);
}
