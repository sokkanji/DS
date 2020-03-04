#include <stdio.h>

void main() {
	int a[] = { 10, 5, 7, 12, 9, 16, 1, 3 };
	int n = sizeof(a) / sizeof(int);
	int i, j, min, index = 0;

	for (i = 0; i < n - 1; i++) {
		min = a[i];
		index = i;
		for (j = i + 1; j < n; j++) {
			if (min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		a[index] = a[i];
		a[i] = min;
	}
	for (i = 0; i < n; i++) 
		printf("%5d", a[i]);
		printf("\n");
	
}