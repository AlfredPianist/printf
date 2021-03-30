#include "holberton.h"

/**
 * prec_int - Formats a signed integer given the precision amount.
 * @integer: The signed integer string to be calculated.
 * @precision: The precision.
 *
 * Return: The formatted string with the precision. Empty if integer
 *         is 0 and precision is 0, or the integer if the number of
 *         digits of the integer is more than the precision given.
 */
char *prec_int(char *integer, unsigned int precision)
{
	char *buf;
	unsigned int len_int, counter;
	short flag_negative;

	buf = NULL;
	flag_negative = counter = 0;

	if (integer[0] == '0' && precision == 0)
	{
		free(integer);
		buf = _alloc(buf, 1);
		buf[0] = '\0';
		return (buf);
	}

	if (integer[0] == '-')
		flag_negative = 1;
	len_int = str_len(integer) - 1 - flag_negative;

	if (len_int < precision)
	{
		buf = _alloc(buf, (precision + flag_negative + 1) * sizeof(*buf));
		if (flag_negative)
			buf[0] = '-';
		while (counter < precision - len_int)
			buf[counter++ + flag_negative] = '0';
		buf = buf + counter + flag_negative;
		buf = str_cpy(integer + flag_negative, buf);
		buf = buf - counter - flag_negative;
		free(integer);
		return (buf);
	}
	return (integer);
}

/**
 * prec_uint - Formats an unsigned integer given the precision amount.
 * @u_integer: The unsigned integer string to be calculated.
 * @precision: The precision.
 *
 * Return: The formatted string with the precision. Empty if unsigned integer
 *         is 0 and precision is 0, or the unsigned integer if the number of
 *         digits of the unsigned integer is more than the precision given.
 */
char *prec_uint(char *u_integer, unsigned int precision)
{
	char *buf;
	unsigned int len_int, counter;

	buf = NULL;
	counter = 0;

	if (u_integer[0] == '0' && precision == 0)
	{
		free(u_integer);
		buf = _alloc(buf, 1);
		buf[0] = '\0';
		return (buf);
	}
	len_int = str_len(u_integer) - 1;

	if (len_int < precision)
	{
		buf = _alloc(buf, (precision + 1) * sizeof(*buf));
		while (counter < precision - len_int)
			buf[counter++] = '0';
		buf = buf + counter;
		buf = str_cpy(u_integer, buf);
		buf = buf - counter;
		free(u_integer);
		return (buf);
	}
	return (u_integer);
}
