#include <stdio.h>

int n, cnt;
void HanoiTower(int n, char a, char b, char c) { //a=출발지, b=경유지, c=목적지
	cnt++;
	if (n == 1) 
		printf("%d번 원판, %c->%c\n", n, a, c);
	else {
		HanoiTower(n - 1, a, c, b);
		printf("%d번 원판, %c->%c\n", n, a, c);
		HanoiTower(n - 1, b, a, c);
	}
}

int main(void) {
	n = 5;
	HanoiTower(n, 'A', 'B', 'C');
	printf("%d회 이동\n", cnt);
	return 0;
} 
