#include <stdio.h>

int write(int filedes, const char *buf, unsigned int nbyte);
int main(void) {

	write(1,"_putchar",9);

	return (0);
}
