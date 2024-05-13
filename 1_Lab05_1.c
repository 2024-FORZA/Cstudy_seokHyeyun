//3052

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[10], re[10], renum[42] = {0}, i, j, dif = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		re[i] = num[i] % 42;
		renum[re[i]] += 1;
	}
	for (j = 0; j < 42; j++) {
		if (renum[j] != 0)
			dif += 1;
	}
	printf("%d", dif);

	return 0;
}