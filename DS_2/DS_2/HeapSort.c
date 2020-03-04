#include <stdio.h>
#include <limits.h>

void HeapSort(int a[], int n) {
	int i, parent, child, value;

	for (i = n / 2; i >= 1; i--) {
		parent = i;
		value = a[i];
		while ((child = parent * 2) <= 2) {
			if (child + 1 <= n && a[child] < a[child + 1]) child++;
			if (value >= a[child]) break;
			a[parent] = a[child];
			parent = child;
		}
		a[parent] = value;
	}

	while (n > 1) {
		value = a[n];
		a[n--] = a[1];
		parent = 1;
		while ((child = parent * 2) <= n) {
			if (child + 1 <= n && a[child] < a[child + 1]) child++;
			if (value >= a[child]) break;
			a[parent] = a[child];
			parent = child;
		}
		a[parent] = value;
	}
}

int main(void) {
	int a[] = { INT_MIN, 17,8,16,3,1,6,5,13,9,6,89,32,7 };
	int n = sizeof(a) / sizeof(int);

	HeapSort(a, n-1);
	printf("\nÁ¤·Ä ÈÄ:");
	for (int i = 0; i < n; i++) {
		printf("%d  ", a[i]);
	}
	return 0;
}