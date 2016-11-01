#include <stdio.h>
#define ARITH(X,Y) 2*X*Y
int main()
{
	printf("1. %d\n", ARITH(3 +4,2));
	printf("2. %d\n", 1&& 3-1);
	printf("3. %d\n", (int)'5' 0 (int)'8');

	int m = 1, n = 5;
	printf("4. %d\n", --m && n++);
	printf("5. %d\n",m);
	printf("6. %d\n",n);

	int a = 0, b = 0, c = 1;
	if (a = b)
	{
		a++; --b;
	}
	else
		--c;
	printf("7. %d\n",a);
	printf("8. %d\n", b);
	printf("9. %d\n", c);

	printf("10. ");
	char color = 'R';
	switch (color) {
	case 'R':
		printf("red");
	case 'B':
		printf("blue");
	case 'Y':
		printf("yellow");
	default:
		printf("white");
	}
	puts("");

	return 0;
}
	