#include <stdlib.h>
#include "DoubleLinkedList.h"

int main(void) {
	linkedList_h* DL; //DL��  linkedList_h ����ü head�� ����ų ������ ������ ����
	listNode* p;   //���߿��Ḯ��Ʈ�� ��� ����ü�� ����ų ������ ������ ����
	DL = createLinkedList_h();
	printf("(1)���� ���� ����Ʈ �����ϱ�!\n");
	printList(DL);

	printf("\n(2)���� ���� ����Ʈ�� [��]��� �����ϱ�!\n");
	insertNode(DL, NULL, "��");
	printList(DL);

	printf("\n(3)���� ���� ����Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�!\n");
	p = searchNode(DL, "��");
	insertNode(DL, p, "��");
	printList(DL);

	printf("\n(4)���� ���� ����Ʈ�� [��] ��� �ڿ� [��] ��� �����ϱ�!\n");
	p = searchNode(DL, "��");
	insertNode(DL, p, "��");
	printList(DL);

	printf("\n(5)���� ���� ����Ʈ���� [��]��� �����ϱ�!\n");
	p = searchNode(DL, "��");
	deleteNode(DL, p);
	printList(DL);

	printf("\n(6)���� ���� ����Ʈ���� [��]��� �����ϱ�!\n");
	p = searchNode(DL, "��");
	deleteNode(DL, p);
	printList(DL);

	printf("\n(7)���� ���� ����Ʈ���� [��]��� �����ϱ�!\n");
	p = searchNode(DL, "��");
	deleteNode(DL, p);
	printList(DL);

	getchar();
	return 0;
}