#include "../holberton.h"

unsigned int _atoi(char **orig, unsigned int digits)
{
	unsigned int counter;
	int number, factor;

	counter = number = 0;
	factor = 1;

	for (counter = 0; counter < digits - 1; counter++)
		factor *= 10;

	counter = 0;
	printf("%s\n", *orig);
	while (counter < digits)
	{
		printf("%u\n", number);
		number += (*(*orig)++ - '0') * factor;
		factor /= 10;
		counter++;
	}
	printf("%s\n", *orig);
	return (number);
}

int main(void)
{
	char *chars = "12345blabla";
	unsigned int number;

	printf("%s\n", chars);
	number = _atoi(&chars, 5);
	printf("%s, %u\n", chars, number);
	return (0);
}
