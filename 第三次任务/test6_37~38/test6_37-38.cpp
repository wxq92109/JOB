#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <iostream>
using namespace std;
typedef struct BiTNode{
	char data;
	BiTNode *lchild, *rchild;
}BiTNode,*BiTree;

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
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}
void InOrderTraverse(BiTree T)//�ǵݹ��������
{
	
	stack<BiTree> Stack;
	if(!T)
	{
		printf("������\n");
		return;
	}
	
	while(T || !Stack.empty())
	{
		while(T)
		{
			Stack.push(T);
			T=T->lchild;
		}
		T=Stack.top();
		Stack.pop();
		printf("%c",T->data);
		T=T->rchild;
	}                                                                                                                                   
}



void PreOrderTraverse(BiTree T)//�ǵݹ��������
{
	
	stack<BiTree> Stack;
	if(!T)
	{
		printf("������\n");
		return;
	}
	while(T || !Stack.empty())
	{
		while(T)
		{
			Stack.push(T);
			printf("%c",T->data);
			T=T->lchild;
		}
		T=Stack.top();
		Stack.pop();		
	         T=T->rchild;		
	}                                                                                                                                   
}


void PostOrderTraverse(BiTree T)//�ǵݹ�������,��һ����Ǳ���������Ƿ���ʹ�
{
	int flag[20];
	stack<BiTree> Stack;
	if(!T)
	{
		printf("������\n");
		return;
	}
	while(T)
	{
		Stack.push(T);
		flag[Stack.size()]=0;
		T=T->lchild;
	}
	while(!Stack.empty())
	{
		T=Stack.top();			
		while(T->rchild && flag[Stack.size()]==0)
		{
			flag[Stack.size()]=1;
			T=T->rchild;
			while(T)
			{
				Stack.push(T);
				flag[Stack.size()]=0;
			    T=T->lchild;
			}
		}
		T=Stack.top();
		printf("%c",T->data);
    	Stack.pop();
	}                                                                                                                                   
}
void main()
{
  
	BiTree T;
	CreateBiTree(T);
	PreOrderTraverse(T);//�������
	printf("\n");
    InOrderTraverse(T);//�������
	printf("\n");
	PostOrderTraverse(T);//�������
	printf("\n");
}