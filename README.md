#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX_STACK_SIZE 5

typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;
int is_empty(int stack[]) {
	return (top == -1);
}
int is_full(int stack[]) {
	return(top == (MAX_STACK_SIZE - 1));
}
int push(element item) {
	if (is_full(stack)) {
		printf("스택 포화\n");
		return;
	}
	else stack[++top] = item;
}
int pop(int stack[]) {
	if (is_empty(stack)) {
		printf("스택 공백\n");
		return;
	}
	else
		return (stack[top--]);
}
int menu() {
	printf("1. push\n");
	printf("2. pop\n");
	printf("3. end\n");
	printf("------------\n");
}
int main(void) {
	int a = 0;
	int item = 1;
	while (a!=3) {
		menu();
		printf("입력: ");
		scanf("%d", &a);
		if (a == 1) {
			push(item);
			printf("출력: %d\n", stack[top]);
			item++;
		}
		if (a == 2) {
			if(is_empty(stack))
			pop(stack);
			else {
				printf("출력: %d\n", pop(stack));
				item--;
			}
		}
		if (a == 3) {
			printf("종료\n");
			break;
		}
	}
	return 0;
}
//스택(stack)
