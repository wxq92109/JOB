typedef struct XorNode{
	char data;
	struct XorNode* LRPtr;
}XorNode,*XorPointer;
typedef struct{
	XorPointer Left,Right;
}XorLinkedList;

void LinkList_Divide(XorLinkedList &L,XorLinkedList &A,XorLinkedList &B,XorLinkedList &C)//把单链表L的元素按类型分为三个循环链表.CiList为带头结点的单循环链表类型.
{
	XorLinkedList s,p,q,r;
  s=L->next;
  A=(XorLinkedList*)malloc(sizeof(XorNode));p=A;
  B=(XorLinkedList*)malloc(sizeof(XorNode));q=B;
  C=(XorLinkedList*)malloc(sizeof(XorNode));r=C; //建立头结点
  while(s)
  {
    if(isalphabet(s->data))
    {
      p->next=s;p=s;
    }
    else if(isdigit(s->data))
    {
      q->next=s;q=s;
    }
    else
    {
      r->next=s;r=s;
    }
  }//while
  p->next=A;q->next=B;r->next=C; //完成循环链表
}//LinkList_Divide 
