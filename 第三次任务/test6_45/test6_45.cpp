#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;

void Del_Sub(BinTree* T)//删除子树T
{
  if(T->lchild) Del_Sub(T->lchild);
  if(T->rchild) Del_Sub(T->rchild);
  free(T);
}

void Del_Sub_x(BinTree* T,int x)//删除所有以元素x为根的子树
{
  if(T->data==x) Del_Sub(T); //删除该子树
  else
  {
    if(T->lchild) 
		Del_Sub_x(T->lchild,x);
    if(T->rchild)
		Del_Sub_x(T->rchild,x); //在左右子树中继续查找
  }//else
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
        cout<<"请输入X的值："<<endl;
		cin>>X;
		Del_Sub_x(root,X);
		display(root);
    }
    return 0;
}