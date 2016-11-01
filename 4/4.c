#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void)
{
	enum card {SPADE,HEART,DIAMOND,CLUB};
	enum card mycard = SPADE;
	printf("%d\n", mycard);

	printf("%010d\n", 0xffff);
	printf("%+10.4f\n", 4.6183);

	double f = 56.7;
	printf("%f\n", 5.0 / 9 * (f - 32));

	int rst, age = 15;
	rst = age >= 13 && age < 18;
	printf("%d\n", rst);
}