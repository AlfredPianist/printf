#include "holberton.h"
#include <stdio.h>

/**
 * _itoa - Converts a number to alpha depending on its base.
 * @number: The number to be converted.
 * @base: The base of the number.
 *
 * Return: The number converted to a string.
 */
char *_itoa(long int number, short base)
{
	long int numbercpy;
	unsigned long int digitcount, counter, divisor;
	char *buffer;
	short flagnegative;

	digitcount = counter = flagnegative = 0;
	divisor = 1;

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
			divisor *= base;
		numbercpy /= base;
		digitcount++;
	}

	buffer = malloc(digitcount * sizeof(*buffer) + 1 + flagnegative);

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

void str_concat(char *orig, char *buffer, unsigned int *buffer_i)
{
	int index;

	index = 0;
	while (orig[index] != '\0')
	{
		buffer[(*buffer_i)++] = orig[index++];
		buffer = check_buffer(buffer, buffer_i);
	}
	free(orig);
}
