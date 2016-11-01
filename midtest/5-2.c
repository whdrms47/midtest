#include <stdio.h>

int main(void) {
	int digit, n, sum = 0;
	canf("%d", &n);
	do {
		digit = n % 10;
		sum += digit;
		n /= 10;
	} while (n > 0);

	printf("%d\n", sum);
}