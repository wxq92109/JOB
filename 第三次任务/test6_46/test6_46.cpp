#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;

void Bitree_Copy_Nonrecursive(BinTree* T,BinTree* &U)//非递归复制二叉树
{
  stack<BinTree*> S1;
  stack<BinTree*> S2;
  BinTree* q,*p;
  S1.push(T); //根指针进栈
  U=(BinTree*)malloc(sizeof(BinTree));
  U->data=T->data;
  q=U;
  S2.push(U);
  while(!S1.empty())
  {
	p = S1.top();
    while(p)
    {
      q->lchild=(BinTree*)malloc(sizeof(BinTree));
      q=q->lchild;q->data=p->data;
      S1.push(p->lchild);
      S2.push(q);
    } //向左走到尽头
    p = S1.top();
	S1.pop();
    q = S2.top();
	S2.pop();
    if(!S1.empty())
    {
     p = S1.top();
	 S1.pop();
	 q = S2.top();
	 S2.pop();
     q->rchild=(BinTree*)malloc(sizeof(BinTree));
     q=q->rchild;q->data=p->data;
     S1.push(p->rchild); //向右一步
     S2.push(q);
    }
  }//while
}



int main(int argc, char *argv[])
{
    char s[100];
	//s为形如A(B,C(D,E))
	cout<<"请构建一个二叉树,形如A(B,C(D,E))："<<endl;
    while(scanf("%s",s)==1)
    {
		BinTree *copyRoot;
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
		cout<<"创建一个树......"<<endl;
        creatBinTree(s,root);
		display(root);
        Bitree_Copy_Nonrecursive(root,copyRoot);
		cout<<"Copy形成的树："<<endl;
		display(copyRoot);
    }
    return 0;
}