#include <stdio.h>

int n;

void PreOrder(char a[], int node_num){
	if (node_num < n && a[node_num] != NULL) {
		printf("%c ", a[node_num]); 
		PreOrder(a, node_num * 2);
		PreOrder(a, node_num * 2 + 1);
	}
}

void InOrder(char a[], int node_num) {
	if (node_num < n && a[node_num] != NULL) {
		InOrder(a, node_num * 2);
		printf("%c ", a[node_num]);
		InOrder(a, node_num * 2 + 1);
	}
}

void PostOrder(char a[], int node_num) {
	if (node_num < n && a[node_num] != NULL) {
		PostOrder(a, node_num * 2);
		PostOrder(a, node_num * 2 + 1);
		printf("%c ", a[node_num]);
	}
}

int main(void) {
	char a[] = { NULL, 'A', 'B', 'C', 'D', 'E', NULL, 'F', NULL, NULL, 'G', NULL, NULL, NULL,
	'H', 'I', NULL, NULL, NULL, NULL, NULL, 'J' };

	n = sizeof(a) / sizeof(char);

	PreOrder(a, 1); printf("\n");
	InOrder(a, 1); printf("\n");
	PostOrder(a, 1); printf("\n");

	return 0;
}