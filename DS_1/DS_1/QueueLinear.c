#include <stdio.h>
#define SIZE 9

int queue[SIZE];
int rear = -1;
int front = 0;

int add(int data) {
	if (rear == SIZE - 1) {
		printf("Queue is full!\n");
		return -1;
	}
	queue[++rear] = data;
	return 0;
}

int delete(void) {
	if (front > rear) {
		printf("Queue is empty!\n");
		return -1;
	}
	return queue[front++];
}

int main(void) {
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
	return 0;
}
