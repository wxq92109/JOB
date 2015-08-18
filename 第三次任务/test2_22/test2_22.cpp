#include<iostream>
#include"LinkList.h"

using namespace std;

void LinkList_reverse(LinkList &L)//链表的就地逆置;为简化算法,假设表长大于2
{
	LinkList p,q,s;
  p=L->next;q=p->next;s=q->next;p->next=NULL;
  while(s->next)
  {
    q->next=p;p=q;
    q=s;s=s->next; //把L的元素逐个插入新表表头
  }
  q->next=p;s->next=q;L->next=s;
  	cout<<"链表的就地逆置成功"<<endl;
}//LinkList_reverse



void main()
{
	LinkList L;
	L = initLinkList(20);
	cout<<"2 3.....20 1"<<endl;
	cout<<"链表的就地逆置"<<endl;
	LinkList_reverse(L);
	printLinkList(&L);
}