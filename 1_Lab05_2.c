//10807

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count, i, j, find, found = 0, num[100];
	scanf("%d", &count);
	for (i = 0; i < count; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &find);
	for (j = 0; j < count; j++) {
		if (num[j] == find)
			found ++;
	}

	printf("%d", found);

	return 0;
}