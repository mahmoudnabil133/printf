#include "main.h"
/**
 * print_rot - it prints a rot
 * @pa: the pointer arg
 * @sum: the sum.
 * Return: sum of printed num in the func.
*/
int print_rot(va_list *pa, int sum)
{int i, j;
	char c, *rot_str = va_arg(*pa, char *);
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	sum = 0;
	if (rot_str == NULL)
	{
		rot_str = "(null)";
		write(1, rot_str, strlen(rot_str));
		sum += strlen(rot_str);
		return (-1);
	}
	for (i = 0; rot_str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (rot_str[i] == input[j])
			{
				c = output[j];
				write(1, &c, 1);
				sum++;
				break;
			}
		}
		if (input[j] == '\0')
		{
			c = rot_str[i];
			write(1, &c, 1);
			sum++;
		}
	}
	return (sum);
}

