//1037

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numFact, i, j, newFact, fact[50], biggest = 0, smallest = 1000000, num;
	scanf("%d", &numFact);
	for (i = 0; i < numFact; i++) {
		scanf("%d", &newFact);
		fact[i] = newFact;
	}
	for (j = 0; j < numFact; j++) {
		if (fact[j] > biggest)
			biggest = fact[j];
		if (fact[j] < smallest)
			smallest = fact[j];
	}
	
	printf("%d", (smallest * biggest));

	return 0;

}