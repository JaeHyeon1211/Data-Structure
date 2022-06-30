#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include "DoubleLinkedList.h"

linkedList_h* createLinkedList_h(void) { 
	//linkedList_h형으로 반환하는 포인터 createLinkedList_h함수이고 매개변수는 없음
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
	//insertNode 함수는 반환형이 void이여서 반환하는 것이 없고 매개변수는 3개가 있음
	//반환형이 없는 void로 되어있고
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	//listNode크기로 만든 동적할당 저장공간을 listNode형 타입으로 변환하여 사용하고 그 주소를 newNode에 저장
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
	//else if (old == DL->head && old->rlink == NULL) { // 노드가 하나만 있을 경우
	//	DL->head = NULL;
	//	free(old);
	//}
	else if (old->rlink == NULL) {//마지막 노드인 경우, 노드가 하나인 경우
		if (old->llink == NULL) DL->head = NULL;
		else old->llink->rlink = old->rlink;
	}
	else if (old->llink == NULL) {  //처음 노드인 경우
		DL->head = old->rlink;
		old->rlink->llink = old->llink;
	}
	else {							// 가운데 노드인 경우
		old->llink->rlink = old->rlink;
		old->rlink->llink = old->llink;
	}
	free(old);
}

listNode* searchNode(linkedList_h* DL, char* x) {
	//serchNode함수는 listNode구조체형의 주소를 반환하는 함수
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