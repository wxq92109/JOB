#include<iostream>
#include"LinkList.h"

using namespace std;
void reverse_merge(LinkList &A,LinkList &B,LinkList &C)//把元素递增排列的链表A和B合并为C,且C中元素递减排列,使用原空间
{
  LinkList pa,pb,pc,pre,q;
  pa=A->next;pb=B->next;pre=NULL; //pa和pb分别指向A,B的当前元素
  while(pa||pb)
  {
    if(pa->data<pb->data||!pb)
    {
      pc=pa;q=pa->next;pa->next=pre;pa=q; //将A的元素插入新表
    }
    else
    {
      pc=pb;q=pb->next;pb->next=pre;pb=q; //将B的元素插入新表
    }
    pre=pc;
  }
  C=A;A->next=pc; //构造新表头
}


void main()
{
	LinkList A,B,C;
	A = initLinkList(2);
	B = initLinkList(2);
	cout<<"A:1 2 3.....20 "<<endl;
	cout<<"B:1 2 3.....30 "<<endl;
	cout<<"链表的合并"<<endl;
	reverse_merge(A,B,C);
	printLinkList(&C);
}