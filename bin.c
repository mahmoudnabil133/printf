#include "main.h"
/**
 * print_bin - it prints a bin
 * @pa: the pointer arg
 * @sum: the sum.
 * Return: sum of printed num in the func.
*/
int print_bin(va_list *pa, int sum)
{unsigned int bin_num = va_arg(*pa, unsigned int);
	char arr_bin[50];
	int i = 0;

	sum = 0;
	if (bin_num == 0)
	{char zero = '0';
		write(1, &zero, 1);
		sum++;
		return (sum);
	}
	while (bin_num > 0)
	{
		arr_bin[i] = (bin_num % 2) + '0';
		bin_num /= 2;
		i++;
	}
	i -= 1;
	while (i >= 0)
	{char s = arr_bin[i];
		write(1, &s, 1);
		sum++;
		i--;
	}
	return (sum);
}
