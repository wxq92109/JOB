#include "stdio.h"
#include "stdlib.h"
#include "LinkList.h"


int
main() {
    int i;
    ElemType item;
    LinkList mainList;
    LNode    currentNode;

    // 初始化链表 initLinkList(0) 可以生成一个空的链表
    mainList    = initLinkList(2);
    currentNode = mainList;
    printf("the current linklist:\n");
    printLinkList(&currentNode);
   
    currentNode = mainList;
    // 向链表中插入很多数据 0停止
    scanf("%d",&item);
    while(item) {
        insertLinkListNode(&mainList,currentNode,item);
        currentNode = currentNode->next;
        scanf("%d",&item);
    }
    currentNode = mainList;

    printf("After insert the current linklist:\n");
    printLinkList(&currentNode);

    // 删除
    currentNode = mainList;
    printf("delete the third item\n");
    for(i = 0;i < 2; i++) {
        currentNode = currentNode->next;
    }
    printf("%d\n",currentNode->data);
    deleteLinkListNode(&mainList,currentNode);
    currentNode = mainList;
    printLinkList(&currentNode);

    // 销毁链表
    destroyLinkList(&mainList);

    exit(0);
}