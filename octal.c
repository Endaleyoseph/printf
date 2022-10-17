#include "main.h"

/**
 * binary - converts number to binary
 * @ap: action parameter
 * Return: the binary
 */
void octal(va_list ap)
{
	int octalNum = 0, countval = 1;

	n = va_arg(ap, int);
	if (n < 0)
	{
		exit(98);
	}
	while (Num != 0) 
	{
		int remainder = Num % 8;
		octalNum += remainder * countval;
		countval = countval * 10;
		Num /= 8;
	}
	return ();
}
