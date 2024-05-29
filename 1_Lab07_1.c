//2675

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int T, r;
	char s[21];
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %s", &r, s);
		int len = strlen(s);
		for (int j = 0; j < len; j++) {
			for (int k = 0; k < r; k++) {
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}