#include<iostream>
#include"LinkList.h"

using namespace std;
void merge(LinkList &A,LinkList &B,LinkList &C)//把链表A和B合并为C,A和B的元素间隔排列,且使用原存储空间
{
  LinkList p,q,s,t; 
  p=A->next;q=B->next;C=A;
  while(p&&q)
  {
    s=p->next;p->next=q; //将B的元素插入
    if(s)
    {
      t=q->next;q->next=s; //如A非空,将A的元素插入
    }
    p=s;q=t;
  }
}

void main()
{
	LinkList A,B,C;
	A = initLinkList(20);
	B = initLinkList(30);
	cout<<"A:1 2 3.....20 "<<endl;
	cout<<"B:1 2 3.....30 "<<endl;
	cout<<"链表的合并"<<endl;
	merge(A,B,C);
	printLinkList(&C);
}