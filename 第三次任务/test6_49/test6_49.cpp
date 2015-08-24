#include <iostream>
#include<string.h>
#include <queue>
#include"BinTree.h"
#define FALSE 0
#define TRUE 1
using namespace std;

int IsComplete_Bitree(BinTree* T)//判断二叉树是否完全二叉树,是则返回1,否则返回0
{
  int flag;
  BinTree*p;
  queue<BinTree*>Q;
  flag=0;
  Q.push(T); //建立工作队列
  while(!Q.empty())
  {
    Q.pop();
    if(!p) flag=1;
    else if(flag) return 0;
    else
    {
		Q.push(p->lchild);
        Q.push(p->rchild); //不管孩子是否为空,都入队列
    }
  }//while
  return 1;
}

int main(int argc, char *argv[])
{
    char s[100];
	//s为形如A(B,C(D,E))
	cout<<"请构建一个二叉树,形如A(B,C(D,E))："<<endl;
    while(scanf("%s",s)==1)
    {
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
		cout<<"创建一个树......"<<endl;
        creatBinTree(s,root);
		display(root);
		IsComplete_Bitree(root);
    }
    return 0;
}