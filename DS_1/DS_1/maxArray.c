#include <stdio.h>
#define SIZE 1000000

int main(void) {
	//int a[SIZE] = { 10, }; //a�� ���������̹Ƿ� �����ε� ������ 1MB�� �ִ� �뷮���� ��Ƶ�
							// ���� �뷮�� 4MB��.

	int *a = (int *)malloc(sizeof(int)*SIZE);
	a[0] = 10;
	a[999999] = 9;
	printf("%d\n", a[0]);
	free(a);
	return 0;
}

