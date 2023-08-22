#include "main.h"
/**
 * print_int - it prints an int
 * @pa: its a pointer to pointer ap
 * @sum: sum of integer we calculate
 * Return: the sum of int digits
*/
int print_int(va_list *pa, int sum)
{int i = 0;
	char c_arr[320];
	unsigned int num = va_arg(*pa, int);

	sum = 0;
	if (num == 0)
	{char zer = '0';
		write(1, &zer, 1);
		sum++;
	}
	else
	{
		if ((int)num < 0)
		{char s = '-';
			num *= -1;
			write(1, &s, 1);
			sum++;
		}
		if (num > 0)
		{
			while (num / 10 > 0)
			{c_arr[i] = (num % 10) + '0';
				num = (num / 10);
				i++;
			}
			i--;
			if (num / 10 == 0)
			{char zero = num + '0';
				write(1, &zero, 1);
				sum++;
			}
			while (i >= 0)
			{
				write(1, &c_arr[i], 1);
				sum++;
				i--;
			}
		}
	}
	return (sum);
}

