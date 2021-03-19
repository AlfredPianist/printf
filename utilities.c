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
		number *= -1, flagnegative = 1;

	if (number == 0)
		digitcount = 1;

	numbercpy = number;
	while (numbercpy != 0)
	{
		if (digitcount > 0)
			divisor *= 10;
		numbercpy /= 10, digitcount++;
	}

	buffer = _alloc(buffer, (digitcount + 1 + flagnegative) * sizeof(*buffer));

	if (flagnegative == 1)
		buffer[counter++] = '-';

	while (counter < (digitcount + flagnegative))
	{
		buffer[counter++] = (number / divisor) + '0';
		number %= divisor, divisor /= 10;
	}
	buffer[counter] = '\0';

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
char *_uitoa_b_o_h(unsigned long int number, short base, short upper)
{
	unsigned long int numbercpy;
	unsigned long int digitcount, counter, divisor;
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
		if (number / divisor > 9)
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
 * rev_string - reverses a string.
 * @str: the string to be reversed.
 */
void rev_string(char *str)
{
	unsigned int length, counter;
	char curr_char;

	length = counter = 0;

	for (length = 0; str[length] != '\0'; length++)
		;

	if (length > 0)
	{
		length--;
		for (counter = 0; counter < length; )
		{
			curr_char = str[counter];
			str[counter++] = str[length];
			str[length--] = curr_char;
		}
	}
}

/**
 * rot13 - Converts a string to rot13 cypher.
 * @str: The source string.
 */
void rot13(char *str)
{
	int index, i_rot;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	index = i_rot = 0;

	while (str[index] != '\0')
	{
		for (i_rot = 0; ch[i_rot] != '\0'; i_rot++)
		{
			if (ch[i_rot] == str[index])
			{
				str[index] = rot13[i_rot];
				break;
			}
		}
		index++;
	}
}

