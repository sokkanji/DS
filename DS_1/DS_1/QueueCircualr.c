#include <stdio.h>
#define SIZE 9

int cqueue[SIZE];
int rear = -1;
int front = 0;
int cnt = 0; //overflow 접근을 쉽게 하기 위해서 존재한다.

int add(int data) {
	if (cnt==SIZE) {
		printf("CQueue is full!\n");
		return -1;
	}
	cnt++;
	cqueue[++rear%SIZE] = data; // 0~8까지의 값을 얻게 됨
	return 0;
}

int delete(void) {
	if (cnt == 0) {  // cnt==0이면 delete할 게 없다.
		printf("CQueue is empty!\n");
		return -1;
	}
	cnt--;
	return cqueue[front++%SIZE]; // 0~8까지의 값을 얻게 됨
}

int main(void) {
	int max=3000000000;
	printf("%d\n", max); //엉뚱한 값이 나옴. 3십억 X

	add(5); add(10); add(15);
	add(20); add(25); add(30);
	add(35); add(40); add(45);
	add(50);
	printf("%d\n", delete(5));
	printf("%d\n", delete(10));
	printf("%d\n", delete(15));
	printf("%d\n", delete(20));
	printf("%d\n", delete(25));
	printf("%d\n", delete(30));
	printf("%d\n", delete(35));
	printf("%d\n", delete(40));
	printf("%d\n", delete(45));
	printf("%d\n", delete(50));
	add(55); add(60); add(65);
	printf("%d\n", delete()); //55 출력
	return 0;
} //int 이기 때문에 계속 사용하다가 문제 발생 가능성 있음. 
