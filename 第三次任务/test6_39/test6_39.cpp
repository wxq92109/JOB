#include<iostream>
using namespace std;

typedef struct BiTNode{  
    int data;  
    BiTNode *lchild, *rchild,*parent;
	int mark; 
}BiTNode,*BiTree;  //��mark���˫��ָ����Ķ������������ 
 void visit(BiTNode* p);
 void CreateBiTree(BiTree &T)//������������˳������ڵ�
{
	cout<<"�������ڵ�"<<endl;
	char ch;
	scanf("%c",&ch);
	if(ch==' ')
	{
		T=NULL;
		return;
	}
	else
	{
		T=(BiTree)malloc(sizeof(BiTNode));
		if(!T)
			exit(1);
		T->data=ch;
		cout<<"�����־markֵ��0-1-2"<<endl;
		cin>>T->mark;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}
void PostOrder_Nonrecursive(BiTree T)//��������������ķǵݹ��㷨,����ջ
{
	BiTree p;
	p=T;
	while(p)
	switch(p->mark)
	{
	  case 0:
		p->mark=1;
		if(p->lchild) p=p->lchild; //����������
		break;
	  case 1:
		p->mark=2;
		if(p->rchild) p=p->rchild; //����������
		break;
	  case 2:
		visit(p);
		p->mark=0; //�ָ�markֵ
		p=p->parent; //����˫�׽��
	}
}//PostOrder_Nonrecursive
 void visit(BiTNode* p)
 {
	cout<<p->data<<endl;
 }


void main()
{
	BiTree T;
	CreateBiTree(T);
	PostOrder_Nonrecursive(T);
}