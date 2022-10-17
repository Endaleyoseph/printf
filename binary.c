#include "main.h"

/**
 * binary - converts number to binary
 * @ap: action parameter
 * Return: the binary
 */

char *binary(va_list ap)
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
		x += (n % 2) * mul;
		mul *= 10;
		n /= 2;
		len++;
	}
	return (print_num(x, mul / 10, len));
}
