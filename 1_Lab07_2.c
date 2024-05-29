//10809

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{	
	char s[101];
	int p[30] = {0};
	scanf("%s", &s);
	int len = strlen(s);
	for (int c=0; c<26; c++){
		p[c] = -1;
		for (int i = 0; i<len ; i++) {
			if ((s[i] == c + 97) && (p[c] == -1))
				p[c] = i;
		}
	}

	for (int j = 0; j < 26; j++) {
		printf("%d ", p[j]);
	}

	return 0;
}