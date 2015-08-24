#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;
int Get_Depth(BinTree* T);//求子树深度的递归算法;
int m = 0;
int n = 0;
int Get_Sub_Depth(BinTree *T,int x)//求二叉树中以值为x的结点为根的子树深度
{
	if(T->data==x)
	{
		printf("%d\n",Get_Depth(T)); //找到了值为x的结点,求其深度
		return 1;
	}
	else
	{
		if(T->lchild) 
			Get_Sub_Depth(T->lchild,x);
		if(T->rchild)
			Get_Sub_Depth(T->rchild,x); //在左右子树中继续寻找
	}
}//Get_Sub_Depth 
int Get_Depth(BinTree* T)//求子树深度的递归算法
	{
		if(!T) return 0;
		else
		{
			m=Get_Depth(T->lchild);
			n=Get_Depth(T->rchild);
			return (m>n?m:n)+1;
		}
}




int main(int argc, char *argv[])
{
    char s[100];
	int X;
	//s为形如A(B,C(D,E))
	cout<<"请构建一个二叉树,形如A(B,C(D,E))："<<endl;
    while(scanf("%s",s)==1)
    {
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
		cout<<"创建一个树......"<<endl;
        creatBinTree(s,root);
		display(root);
        cout<<endl;
		cout<<"请输入X值："<<endl;
        Get_Sub_Depth(root,X);
    }
    return 0;
}