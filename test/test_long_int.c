#include "../holberton.h"

int main(void)
{
	char *min_int;

	min_int = _itoa(SHRT_MIN + SHRT_MAX);
	printf("%hi\n", SHRT_MIN + SHRT_MAX);
	printf("%s\n", min_int);
	free(min_int);
	return (0);
}
