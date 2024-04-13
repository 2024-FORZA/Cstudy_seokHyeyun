//2439

#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int line, i, y, z;
	
	scanf("%d", &line);
	for (i = 1; i <= line; i++) {
		for (y = 1; y <= line - i; y++) {
			printf(" ");
		}
		for (z = 1; z <= i; z++) {
			printf("*");
		}
		printf("\n");
	}
}