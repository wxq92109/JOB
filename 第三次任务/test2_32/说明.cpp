int LinkList_Divide(LinkList &L,CiList &A,CiList &B,CiList &C)//把单链表L的元素按类型分为三个循环链表.CiList为带头结点的单循环链表类型.
{
  s=L->next;
  A=(CiList*)malloc(sizeof(CiLNode));p=A;
  B=(CiList*)malloc(sizeof(CiLNode));q=B;
  C=(CiList*)malloc(sizeof(CiLNode));r=C; //建立头结点
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
}
