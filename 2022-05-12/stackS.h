#pragma once
#define STACK_SIZE 100

typedef int element;
// int���� element���� ����
element stack[STACK_SIZE];
//����� ������ 100�� ũ�Ⱑ 100�� �ƴ�

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);
//����ϴ� �Լ��� ����� ���ؼ� ��ȯ���� void�� �Լ� ����
