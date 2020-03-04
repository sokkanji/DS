#include <stdio.h>
#define SIZE 1000000

int main(void) {
	//int a[SIZE] = { 10, }; //a가 지역변수이므로 스택인데 스택은 1MB가 최대 용량으로 잡아둠
							// 현재 용량은 4MB임.

	int *a = (int *)malloc(sizeof(int)*SIZE);
	a[0] = 10;
	a[999999] = 9;
	printf("%d\n", a[0]);
	free(a);
	return 0;
}

