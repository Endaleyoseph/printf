#include "main.h"

/**
 * _octal- converts number to octal
 * @ap: action parameter
 * Return: the octal
 */
char *_octal(va_list ap)
{
	int n, len, mul, x;

	n = va_arg(ap, int);
	if (n < 0)
	{
		exit(98);
	}

	len = x = 0;
	mul = 1;
	while (n != 0)
	{
		x += (n % 8) * mul;
		mul *= 10;
		n /= 8;
		len++;
	}
	return (print_num(x, mul / 10, len));
}
