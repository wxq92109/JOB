#include<iostream>
#include "test2_17.h"

using namespace std;


void main()
{
	 int i;
    ElemType item;
    LinkList mainList;
    LNode    currentNode;

    // 初始化链表 initLinkList(0) 可以生成一个空的链表
    mainList    = initLinkList(3);
    currentNode = mainList;
    printf("the current linklist:\n");
    printLinkList(&currentNode);
   
    currentNode = mainList;
    // 向链表中插入很多数据 0停止
	cout<<"向链表中插入很多数据 0停止:"<<endl;
    scanf("%d",&item);
    while(item) {
        insertLinkListNode(&mainList,currentNode,item);
        currentNode = currentNode->next;
        scanf("%d",&item);
    }
	printLinkList(&mainList);
	
	insertNode_i(&mainList,3,88);
	printLinkList(&mainList);

	deleteNode_i(&mainList,1);
	printLinkList(&mainList);
}

