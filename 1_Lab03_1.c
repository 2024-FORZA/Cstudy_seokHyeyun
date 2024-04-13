//10817

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, secMax;

	scanf("%d %d %d", &a, &b, &c);
	if ((a >= b && a <= c) || (a <= b && a >= c))
		secMax = a;
	else if ((b >= a && b <= c) || (b <= a && b >= c))
		secMax = b;
	else
		secMax = c;
	printf("%d", secMax);
}