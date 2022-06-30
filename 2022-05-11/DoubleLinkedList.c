#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include "DoubleLinkedList.h"

linkedList_h* createLinkedList_h(void) { 
	//linkedList_h������ ��ȯ�ϴ� ������ createLinkedList_h�Լ��̰� �Ű������� ����
	linkedList_h* DL; 
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));
	DL->head = NULL;
	return DL;
}

void printList(linkedList_h* DL) {
	listNode* p;
	printf("DL =(");

	p = DL->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->rlink;
		if (p != NULL)printf(",");
	}
	printf(")\n");
}

void insertNode(linkedList_h* DL, listNode* pre, char* x) {
	//insertNode �Լ��� ��ȯ���� void�̿��� ��ȯ�ϴ� ���� ���� �Ű������� 3���� ����
	//��ȯ���� ���� void�� �Ǿ��ְ�
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	//listNodeũ��� ���� �����Ҵ� ��������� listNode�� Ÿ������ ��ȯ�Ͽ� ����ϰ� �� �ּҸ� newNode�� ����
	strcpy(newNode->data, x);
	if (DL->head == NULL) {
		newNode->rlink = NULL;
		newNode->llink = NULL;
		DL->head = newNode;
	}
	else {
		newNode->rlink = pre->rlink;
		pre->rlink = newNode;
		newNode->llink = pre;
		if (newNode->rlink != NULL)
			newNode->rlink->llink = newNode;
	}
}
void deleteNode(linkedList_h* DL, listNode*old) {
	if (DL->head == NULL || old == NULL)return;
	//else if (old == DL->head && old->rlink == NULL) { // ��尡 �ϳ��� ���� ���
	//	DL->head = NULL;
	//	free(old);
	//}
	else if (old->rlink == NULL) {//������ ����� ���, ��尡 �ϳ��� ���
		if (old->llink == NULL) DL->head = NULL;
		else old->llink->rlink = old->rlink;
	}
	else if (old->llink == NULL) {  //ó�� ����� ���
		DL->head = old->rlink;
		old->rlink->llink = old->llink;
	}
	else {							// ��� ����� ���
		old->llink->rlink = old->rlink;
		old->rlink->llink = old->llink;
	}
	free(old);
}

listNode* searchNode(linkedList_h* DL, char* x) {
	//serchNode�Լ��� listNode����ü���� �ּҸ� ��ȯ�ϴ� �Լ�
	listNode* temp;
	//
	temp = DL->head;
	while (temp != NULL)
	{
		if (strcmp(temp->data, x) == 0)return temp;
		else temp = temp->rlink;
	}
	return temp;
}