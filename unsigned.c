#include "main.h"
/**
 * print_uns - it prints a uns
 * @pa: the pointer arg
 * @sum: the sum.
 * Return: sum of printed num in the func.
*/
int print_uns(va_list *pa, int sum)
{int i = 0;
	unsigned int num = va_arg(*pa, unsigned int);
	char c_arr[320];

	sum = 0;
	if (num == 0)
	{char zer = '0';

		write(1, &zer, 1);
		sum++;
	}
	else
	{
		while (num > 0)
		{c_arr[i] = (num % 10) + '0';
			num = (num / 10);
			i++;
		}
		i--;
		while (i >= 0)
		{write(1, &c_arr[i], 1);
			sum++;
			i--;
		}
	}
	return (sum);
}

