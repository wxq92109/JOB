#include<iostream>
using namespace std;

typedef struct BiTNode{  
    int data;  
    BiTNode *lchild, *rchild,*parent;
	int mark; 
}BiTNode,*BiTree;  //有mark域和双亲指针域的二叉树结点类型 
 void visit(BiTree p);
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
void Inorder_Nonrecursive(BiTree T)//不设栈非递归遍历有双亲指针的二叉树
{
	BiTree p=T;
	while(p->lchild)
		p=p->lchild; //向左走到尽头
	while(p)
	{
		visit(p);
		if(p->rchild) //寻找中序后继:当有右子树时	
		{
			 p=p->rchild;
			while(p->lchild) 
				p=p->lchild; //后继就是在右子树中向左走到尽头
		 }
		else if(p->parent->lchild==p)
			 p=p->parent; //当自己是双亲的左孩子时后继就是双亲
	   	else
		{
			p=p->parent;
		    while(p->parent&&p->parent->rchild==p) 
				p=p->parent;
			p=p->parent;
		 } //当自己是双亲的右孩子时后继就是向上返回直到遇到自己是在其左子树中的祖先
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