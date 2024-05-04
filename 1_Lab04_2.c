// 27433

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	long long fact;
	fact = 1;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		fact *= i;
	}

	printf("%lld", fact);

	return 0;
}