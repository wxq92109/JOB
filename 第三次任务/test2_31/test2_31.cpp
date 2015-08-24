#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
typedef int datatype;
  typedef struct node
   { 
	datatype data;
    struct node *next;
   } *linklist;     //linklist结构体类型描述
void CreateList(linklist &L,int n)
{
	int temp,x;
	linklist q,p;
	q = p;
    scanf("%d",&temp);

	p -> data = temp;
	p->next = NULL;

for(int i=0; i<n-1;i++)
{	
	q=(linklist)malloc(sizeof(node)); //生成新的结点
	cin>>q->data;
	q -> next = p;
	p = q;
}

}
 
void DeleteBefore(linklist &L,node *s,int m)
{
	struct node *p,*q;
	p=s;
	while(p->next->next!=s)
	p=p->next;
	q=p->next;
	p->next=s;
	if(q == L) // 如果删除头结点
		L = s;
	delete q;

}
 void print(linklist L,int n)
{
	struct node *p;
	p=L->next;

	for(int i=0;i<n;i++)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
 void main()
 {
	linklist A;
	struct node *s;
	int n;
	cout<<"输入链表的长度n"<<endl;
	cin>>n;
	cout<<"输入n个数"<<endl;
	CreateList(A,n);
	cout<<"输入要删除第几个的前结点"<<endl;
	int x;
	cin>>x;
	s=A->next;
	for(int i=0;i<x;i++)
	{
		s=s->next;
	}
	DeleteBefore(A,s,n);
	cout<<"输出链表元素..."<<endl;
	print(A,n-1);
 }