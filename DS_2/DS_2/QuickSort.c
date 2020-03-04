#include <stdio.h>

void QuickSort(int a[], int left, int right) {
	int pivot = a[left], i = left, j = right, temp;
	if(left<right){
		while (i < j) {
			while (pivot <= a[i] && i < right) i++;
			while (pivot >= a[j] && j > left) j--; 
			if (i < j) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		a[left] = a[j];
		a[j] = pivot;
		QuickSort(a, left, j - 1);
		QuickSort(a, j + 1, right);
	}	
}

int main(void) {
	int a[] = {21,24,28,9,27,12,3,30,45,50,38,55,41,33};
	int n = sizeof(a) / sizeof(int);
	QuickSort(a, 0, n - 1);
	printf("Äü Á¤·Ä : ");
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);
	printf("\n");

	return 0;
}

