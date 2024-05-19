//1547

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int M, x, y, i, ball = 1;
	scanf("%d", &M);
	for (i = 0; i < M; i++) {
		scanf("%d", &x);
		scanf("%d", &y);
		if (ball == x)
			ball = y;
		else if (ball == y)
			ball = x;
	}
	if ((ball != 1) && (ball != 2) && (ball != 3))
		ball = -1;

	printf("%d", ball);

	return 0;
}
