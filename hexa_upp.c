#include "main.h"

/**
 * _hexa- converts number to hexadecimal
 * @ap: action parameter
 * Return: the hexadecimal
 */
char *_hexa(va_list ap)
{
	int n, len, mul, x, remainder;
	static char *array = "0123456789abcdef";

	n = va_arg(ap, int);
	if (n < 0)
	{
		exit(98);
	}

	len = x = 0;
	mul = 1;
	while (n != 0)
	{
		remainder = n % 16;
		x += remainder * mul;
		mul *= 10;
		n /= 16;
		len++;
	}
	return (print_num(x, mul / 10, len));
}
