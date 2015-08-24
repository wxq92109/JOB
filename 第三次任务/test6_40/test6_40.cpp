#include<iostream>
using namespace std;

typedef struct BiTNode{  
    int data;  
    BiTNode *lchild, *rchild,*parent;
	int mark; 
}BiTNode,*BiTree;  //��mark���˫��ָ����Ķ������������ 
 void visit(BiTree p);
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
void Inorder_Nonrecursive(BiTree T)//����ջ�ǵݹ������˫��ָ��Ķ�����
{
	BiTree p=T;
	while(p->lchild)
		p=p->lchild; //�����ߵ���ͷ
	while(p)
	{
		visit(p);
		if(p->rchild) //Ѱ��������:����������ʱ	
		{
			 p=p->rchild;
			while(p->lchild) 
				p=p->lchild; //��̾������������������ߵ���ͷ
		 }
		else if(p->parent->lchild==p)
			 p=p->parent; //���Լ���˫�׵�����ʱ��̾���˫��
	   	else
		{
			p=p->parent;
		    while(p->parent&&p->parent->rchild==p) 
				p=p->parent;
			p=p->parent;
		 } //���Լ���˫�׵��Һ���ʱ��̾������Ϸ���ֱ�������Լ��������������е�����
	 }//while
}
void visit(BiTree p)
{
	cout<<p->data<<endl;
}


void main()
{
	BiTree T;
	CreateBiTree(T);
	Inorder_Nonrecursive(T);
}