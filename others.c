#include "main.h"
/**
 * print_others - it prints a others
 * @sum: the sum
 * @s: the format[i].
 * Return: sum of printed num in the func.
*/
int print_others(int sum, char s)
{
	sum = 0;
	if (s == '%')
	{
		write(1, &s, 1);
		sum++;
	}
	else
	{char f = '%';

		write(1, &f, 1);
		write(1, &s, 1);
		sum += 2;
	}
	return (sum);

}

