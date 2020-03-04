#include <stdio.h>
#define SIZE 9

int main(void) {
	int G[SIZE][SIZE] = { {0,1,1,0,0,0,0,0,0 },
	{1,0,0,1,1,0,0,0,0},
	{1,0,0,1,0,0,0,1,0},
	{0,1,1,0,0,1,1,0,0},
	{0,1,0,0,0,1,0,0,1},
	{1,0,0,1,1,0,0,0,0},
	{0,0,1,0,0,0,0,1,1},
	{0,0,0,0,1,0,1,0,0},
	{0,0,0,0,1,0,1,0,0} };

	char v[] = { 'A', 'B', 'G', 'H', 'C', 'I', 'E', 'F', 'D' };
	int i, j;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			printf("%3d", G[i][j]);
		} printf("\n");
	}

	for (i = 0; i < SIZE; i++)
		printf("%3c", v[i]);

	printf("\n");
	return 0;
}