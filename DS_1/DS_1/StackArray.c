#include <stdio.h>
#define SIZE 6


int stack[SIZE];
int top = -1;
int push(int data) {
	if (top >= SIZE - 1) {
		//오버플로우 처리하는 공간
		printf("Stack is Full!\n");
		return -1;
	}
	stack[++top] = data;
	return 0;
}

int pop(void) {
	if (top == -1) {
		//언더플로우 처리하는 공간
		printf("stack is empty!\n");
		return -1;
	}
	return stack[top--];
}

int main() {
	push(5);
	push(10);
	push(25);
	push(30);
	push(40);
	push(50);
	push(60);// stack is full! 

	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());

	push(70);
	printf("%d\n", pop()); printf("%d\n", pop());
	printf("%d\n", pop()); printf("%d\n", pop());

	return 0;
}