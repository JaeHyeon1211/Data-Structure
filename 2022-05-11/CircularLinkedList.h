#pragma once
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;

typedef struct {
	listNode* head;
}listedList_h;

listedList_h* createLinkedList_h(void);
void printList(listedList_h* CL);
void insertFirstNode(listedList_h* CL, char* x);
void insertMiddleNode(listedList_h* CL, listNode* pre, char* x);
void deleteNode(listedList_h* CL, listNode* old);
listNode* searchNode(listedList_h* CL, char* x);
