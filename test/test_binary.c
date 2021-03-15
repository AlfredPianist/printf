#include "holberton.h"

/**
 * _itoa - Converts a number to binary or octal depending on its base.
 * @number: The number to be converted.
 *
 * Return: The number converted to a string.
 */
char *_itoba(unsigned long int number, short base)
{
	unsigned long int numbercpy;
	unsigned long int digitcount, counter, divisor;
	char *buffer;

	digitcount = counter = 0;
	divisor = 1;
	buffer = NULL;

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
;
	while (counter < digitcount)
	{
		buffer[counter] = (number / divisor) + '0';
		number %= divisor, divisor /= base, counter++;
	}
	buffer[counter] = '\0';

	return (buffer);
}

int main(void)
{
	unsigned int number;
	char *numbera;

	number = 20;
	numbera = _itoba(number, 2);
	printf("Number %u in binary is %s\n", number, numbera);

	numbera = _itoba(number, 8);
	printf("Number %u in octal is %s\n", number, numbera);

	printf("%u in octal is %o\n", number, number);
	printf("%u in hex is %x\n", number, number);
	return (0);
}
