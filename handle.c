#include "main.h"
/**
 * handle_func - it handels func.
 * @ap: the ap.
 * @s: the format[i].
 * @p_sum: pointer to sum.
 * Return: nothing.
*/

int handle_func(va_list *ap, char s, int p_sum)
{
	p_sum = 0;
	if (s == 'c')
		p_sum += print_char(ap, p_sum);
	else if (s == 's')
		p_sum += print_str(ap, p_sum);
	else if (s == 'd' || s == 'i')
		p_sum += print_int(ap, p_sum);
	else if (s == 'u')
		p_sum += print_uns(ap, p_sum);
	else if (s == 'r')
		p_sum += print_rev(ap, p_sum);
	else if (s == 'R')
		p_sum += print_rot(ap, p_sum);
	else if (s == 'b')
		p_sum += print_bin(ap, p_sum);
	else if (s == 'o')
		p_sum += print_oct(ap, p_sum);
	else if (s == 'x')
		p_sum += print_hex(ap, p_sum);
	else if (s == 'X')
		p_sum += print_Uhex(ap, p_sum);
	else
		p_sum += print_others(p_sum, s);
	return (p_sum);
}
