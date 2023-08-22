#include "main.h"
/**
 * print_Uhex - it prints a Uhex
 * @pa: the pointer arg
 * @sum: the sum.
 * Return: sum of printed num in the func.
*/
int print_Uhex(va_list *pa, int sum)
{unsigned int hex_num = va_arg(*pa, unsigned int);
	char arr_hex[50];
	int i = 0;

	sum = 0;
	if (hex_num == 0)
	{char zero = '0';
		write(1, &zero, 1);
		sum++;
		return (sum);
	}
	while (hex_num > 0)
	{
		if ((hex_num % 16) > 9)
			arr_hex[i] = (hex_num % 16) + 'A' - 10;
		else
			arr_hex[i] = (hex_num % 16) + '0';
		hex_num /= 16;
		i++;
	}
	i -= 1;
	while (i >= 0)
	{char s = arr_hex[i];
		write(1, &s, 1);
		sum++;
		i--;
	}
	return (sum);
}

