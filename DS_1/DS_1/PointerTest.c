#include <stdio.h>

int main() {
	/*int k = 5, *p1;
	//int *p2 = 10;
	//*p2 = 10;
	p1 = &k;
	k = *p1;
	printf("k=%d, *p1=%d\n", k, *p1);
	*/
	int k = 5, *p;
	p = &k;
	*p = 10;
	*p = k + 10;

	printf("%d, %d", k, *p);
	
	return 0;
}