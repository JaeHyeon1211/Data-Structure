#pragma once
#define STACK_SIZE 100

typedef int element;
// int형의 element변수 선언
element stack[STACK_SIZE];
//요소의 갯수가 100개 크기가 100이 아님

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);
//출력하는 함수를 만들기 위해서 반환형은 void로 함수 선언
