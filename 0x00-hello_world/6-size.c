#include <stdio.h>

int main(void)
{
	printf("Size of a char: %zu\d byte(s)", sizeof(char));

	printf("Size of an int: %zu\d byte(s)", sizeof(int));

	printf("Size of a long int: %zu\d bytes(s)", sizeof(long));

	printf("Size of a lon long int: %zu\d byte(s)", sizeof(long long));

	printf("Size of a float: %zu\d byte(s)", sizeof(float));

	return (0);
}
