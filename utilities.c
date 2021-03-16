#include "holberton.h"

/**
 * _itoa - Converts a number to alpha depending on its base.
 * @number: The number to be converted.
 *
 * Return: The number converted to a string.
 */
char *_itoa(long int number)
{
	long int numbercpy;
	unsigned long int digitcount, counter, divisor;
	char *buffer;
	short flagnegative;

	digitcount = counter = flagnegative = 0;
	divisor = 1;
	buffer = NULL;

	if (number < 0)
	{
		number *= -1;
		flagnegative = 1;
	}

	if (number == 0)
		digitcount = 1;
	numbercpy = number;
	while (numbercpy != 0)
	{
		if (digitcount > 0)
			divisor *= 10;
		numbercpy /= 10;
		digitcount++;
	}

	buffer = _alloc(buffer, digitcount * sizeof(*buffer) + 1 + flagnegative);

	if (flagnegative)
		buffer[0] = '-';
	while (counter < digitcount)
	{
		buffer[counter + flagnegative] = (number / divisor) + '0';
		number %= divisor;
		divisor /= 10;
		counter++;
	}
	buffer[counter + flagnegative] = '\0';

	return (buffer);
}

/**
 * _uitoa_b_o_h - Converts an unsigned number to string, or binary, octal or
 *                hex, depending on its base.
 * @number: The number to be converted.
 * @base: The base of the number.
 * @upper: Only for hex. If 1, store as uppercase. If 0, store as lowercase.
 *
 * Return: The number converted to a string.
 */
char *_uitoa_b_o_h(unsigned int number, short base, short upper)
{
	unsigned int numbercpy;
	unsigned int digitcount, counter, divisor;
	char *buffer;

	digitcount = counter = 0, divisor = 1, buffer = NULL;

	if (number == 0)
		digitcount = 1;
	numbercpy = number;
	while (numbercpy != 0)
	{
		if (digitcount > 0)
			divisor *= base;
		numbercpy /= base, digitcount++;
	}

	buffer = _alloc(buffer, digitcount * sizeof(*buffer) + 1);

	while (counter < digitcount)
	{
		if (base == 16 && (number / divisor > 9))
		{
			if (upper)
				buffer[counter] = (number / divisor) + 'A' - 10;
			else
				buffer[counter] = (number / divisor) + 'a' - 10;
		}
		else
			buffer[counter] = (number / divisor) + '0';
		number %= divisor, divisor /= base, counter++;
	}
	buffer[counter] = '\0';

	return (buffer);
}

/**
 * rot13 - Converts a string to rot13 cypher.
 * @str: The source string.
 */
void rot13(char *str)
{
	int index, i_rot, rot;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	index = rot = 0;

	while (str[index] != '\0')
	{
		for (i_rot = 0; ch[i_rot] != '\0'; i_rot++)
		{
			if (ch[i_rot] == str[index] && rot == 0)
			{
				str[index] = rot13[i_rot];
				rot++;
			}
		}
		index++;
		rot = 0;
	}
}
