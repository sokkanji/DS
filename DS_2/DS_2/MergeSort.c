#include <stdio.h>
#include <stdlib.h>

void Merge(int a[], int left, int mid, int right);
void Division(int a[], int left, int right);

int main(void) {
	int a[] = { 100,2,6,23,43,91,3,76,34,28,19,40 };
	int n = sizeof(a) / sizeof(int);

	Division(a, 0, n - 1);

	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);
	printf("\n");

	return 0;
}

void Merge(int a[], int left, int mid, int right) {
	int* result = (int*)malloc(sizeof(int) * (right - left + 1));

	int i = left, j = mid + 1, k = 0;

	while (i <= mid && j <= right) {
		if (a[i] < a[j]) result[k++] = a[i++];
		else result[k++] = a[j++];
	}

	if (i > mid) while (j <= right) result[k++] = a[j++];
	else while (i <= mid) result[k++] = a[i++];

	k = 0;
	for (i = left; i <= right; i++) a[i] = result[k++];

	free(result);
}

void Division(int a[], int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;
		Division(a, left, mid);
		Division(a, mid + 1, right);

		Merge(a, left, mid, right);
	}
}