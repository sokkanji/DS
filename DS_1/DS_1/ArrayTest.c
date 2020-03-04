#include <stdio.h>

int main() {
	int i, j, b[5][4], c[4][5];
	int a[4][5] = { {5,41,24,6,10},
	{50,33,20,15,11},
	{7,17,35,21,16},
	{4,16,61,90,1} };

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			b[j][i] = a[i][j];
			c[i][j] = a[i][j];
			printf("%d ", a[i][j]);
		} printf("\n");
	} printf("배열 a \n\n");

	
	for (i = 0; i <= 4; i++) {
		for (j = 3; j >= 0; j--) {
			printf("%d ", b[i][j]);
		} printf("\n");
	} printf("배열 b\n\n");

	for (i = 3; i >= 0; i--) {
		for (j = 4; j >= 0; j--) {
			printf("%d ", c[i][j]);
		} printf("\n");
	} printf("배열 c\n");

	return 0;
}