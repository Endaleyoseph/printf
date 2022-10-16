#include "main.h"
#include <stdlib.h>

/**
 * num_str - converts a number to string
 * @ap: action parameter
 * Return: string
 */

char *num_str(va_list ap)
{
	int len, mul, n, temp;

	n = va_arg(ap, int);
	if (n < 0)
		temp = n * -1;
	else
		temp = n;
	mul = 1;
	len = 0;
	if (temp == 0)
		len++;
	while (temp > 0)
	{
		len++;
		if (len > 1)
			mul *= 10;
		temp /= 10;
	}

	return (print_num(n, mul, len));
}

/**
 * print_num - convert number to string
 * @n: number to be converted
 * @mul: multipile of 10
 * @len: the length of the number
 * Return: string
 */

char *print_num(int n, int mul, int len)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * (len + 2));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	while (n <= 0 && i < (len + 1))
	{
		str[i] = ((n / mul) * -1 + '0');
		n = n % mul;
		mul /= 10;
		i++;
	}
	while (n >= 0 && i < len)
	{
		str[i] = ((n / mul) + '0');
		n = n % mul;
		mul /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
