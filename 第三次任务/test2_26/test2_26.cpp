#include<iostream>
#include"LinkList.h"

using namespace std;
LinkList LinkList_Intersect(LinkList A,LinkList B,LinkList &C)//在有序链表结构上进行链表合并
{
  LinkList p,pa,pb,pc,s,q;
  p=A->next;q=B->next;
  pc=(LNode)malloc(sizeof(node));
  while(p&&q)
  {
    if(p->data<q->data) p=p->next;
    else if(p->data>q->data) q=q->next;
    else
    {
      s=(LNode)malloc(sizeof(node));
      s->data=p->data;
      pc->next=s;pc=s;
      p=p->next;q=q->next;
    }
  }//while
  C=pc;
  cout<<"链表的合并成功！"<<endl;
  return C;
}//LinkList_Intersect 

void main()
{
	LinkList A,B,C;
	A = initLinkList(10);
	B = initLinkList(20);
	cout<<"A:1 2 3.....10 "<<endl;
	cout<<"B:1 2 3.....20 "<<endl;
	cout<<"链表的合并"<<endl;
	LinkList_Intersect(A,B,C);
}