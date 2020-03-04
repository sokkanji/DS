#include <stdio.h>

void ShellSort(int a[], int n) {
	int i, j, d, temp, key;
	for (d = n / 2; d >= 1; d /= 2) {
		for (i = d; i < n; i++) {
			key = a[i];
			for (j = i - d; j >= 0; j-=d) {
				if (key < a[j]) a[j+d]=a[j];
				else break;
			} a[j + d] = key;
		}
	}
}

int main(void) {
	int a[] = { 7, 12, 6, 11, 3, 8, 5, 2 };
	int i, n = sizeof(a) / sizeof(int);

	printf("정렬 전 : ");
	for (i = 0; i < n; i++) printf("%d  ", a[i]);
	ShellSort(a, n);
	printf("\n삽입 정렬 후 : ");
	for (i = 0; i < n; i++) printf("%d  ", a[i]);
	return 0;
}