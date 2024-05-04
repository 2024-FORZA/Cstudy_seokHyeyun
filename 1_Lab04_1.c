// 10870

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, a, b, fib, i;
	a = 0;
	b = 1;
	scanf("%d", &n);

	if (n == 0)
		fib = a;
	else if (n == 1)
		fib = b;
	else 
		for (i = 2; i <= n; i++) {
			fib = a + b;
			a = b;
			b = fib;
		}
	
	printf("%d", fib);

	return 0;
}