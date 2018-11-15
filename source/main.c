#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int a[5];
	int i, j,k, b;

	printf("input 5 number: ");
	for (k = 0; k < 5; k++) {
		scanf_s("%d", &a[k]);
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (a[j] > a[j + 1]) {
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	for (int x = 0; x < 5; x++) 
		printf("%d", a[x]);
	printf("\n");
	system("pause");
	return 0;
}