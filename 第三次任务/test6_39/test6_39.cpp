#include<iostream>
using namespace std;

typedef struct BiTNode{  
    int data;  
    BiTNode *lchild, *rchild,*parent;
	int mark; 
}BiTNode,*BiTree;  //有mark域和双亲指针域的二叉树结点类型 
 void visit(BiTNode* p);
 void CreateBiTree(BiTree &T)//建树，按先序顺序输入节点
{
	cout<<"创建树节点"<<endl;
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
		cout<<"输入标志mark值：0-1-2"<<endl;
		cin>>T->mark;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}
void PostOrder_Nonrecursive(BiTree T)//后序遍历二叉树的非递归算法,不用栈
{
	BiTree p;
	p=T;
	while(p)
	switch(p->mark)
	{
	  case 0:
		p->mark=1;
		if(p->lchild) p=p->lchild; //访问左子树
		break;
	  case 1:
		p->mark=2;
		if(p->rchild) p=p->rchild; //访问右子树
		break;
	  case 2:
		visit(p);
		p->mark=0; //恢复mark值
		p=p->parent; //返回双亲结点
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