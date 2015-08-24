#include<iostream>
#include"LinkList.h"

using namespace std;


//删除元素递增排列的链表L中所有值相同的元素
void Delete_Equal(LinkList &L)
{
  LinkList p,q;
  p=L->next;q=p->next; //p,q指向相邻两元素
  while(p->next)
  {
    if(p->data!=q->data)
    {
      p=p->next;q=p->next; //当相邻两元素不相等时,p,q都向后推一步
    }
    else
    {
      while(q->data==p->data) 
   {
     free(q);
     q=q->next; 
   }
      p->next=q;p=q;q=p->next; //当相邻元素相等时删除多余元素
    }//else
  }//while
  cout<<"自动删除链表中重复元素成功"<<endl;
}//Delete_Equal 

void main()
{
	LinkList L;
	L = initLinkList(20);	
	cout<<"自动删除链表中重复元素"<<endl;
	Delete_Equal(L);
}