typedef int ElemType;

typedef struct node {
    ElemType data;
    struct node *next;
} *LNode, *LinkList;

// 初始化一个链表
LinkList
initLinkList(int n) {
    LinkList list = NULL;
    ElemType e;
    LNode p,r;

    int i;
    for(i = 1; i <= n; i++) {
        scanf("%d",&e);
        p = (LinkList) malloc(sizeof(LNode));
        p->data = e;
        p->next = NULL;
        if(!list) list = p;
        else r->next = p;
        r = p; // 下一个节点
    }

    return list; // 返回链表头指针
}

// 打印链表
void
printLinkList(LinkList *L) {
    while(*L) {
        printf("%d ",(*L)->data);
        (*L) = (*L)->next;
    }
    printf("\n");
}

// 向链表插入结点
void
insertLinkListNode(LinkList *list,LNode insertNode,ElemType item) {
    LinkList newNode;
    newNode = (LNode) malloc(sizeof(LNode));
    newNode->data = item;
    if(!*list) {
        *list = newNode;
        newNode->next = NULL;
    } else {
        // 从1个位置开始向后插入? 
        newNode->next    = insertNode->next; // 插入点
        insertNode->next = newNode;
        // 插入到开始位置 测试一下 有段错误 可能问题在main
        //*list = newNode;
        //newNode->next = insertNode;
    }
}

// 删除链表的指定结点
void deleteLinkListNode(LinkList *list,LNode deleteNode) {
    LNode currentNode;
    if(deleteNode == *list) { // 第一个节点
        *list = deleteNode->next;
        free(deleteNode);
    } else {
        for(currentNode = *list; currentNode->next != deleteNode; currentNode = currentNode->next);
        if(currentNode->next != NULL) { // ? 
            currentNode->next = deleteNode->next;
            free(deleteNode);
        }
    }
}

// 销毁一个链表
void destroyLinkList(LinkList *list) {
    LNode currentNode,nextNode;
    currentNode = *list;
    while(currentNode) {
        nextNode = currentNode->next;
        free(currentNode);
        currentNode = nextNode;
    }
    *list = NULL;
}