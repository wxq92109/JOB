#include <iostream>
#include<string.h>
#include <queue>
#include"BinTree.h"
using namespace std;

void visit(BinTree* p)
{
	cout<<p->data<<endl;
}
void LayerOrder(BinTree* T)//层序遍历二叉树
{
  BinTree* p;
  queue<BinTree*>Q; //建立工作队列
  Q.push(T);
  while(!Q.empty())
  {
    p = Q.front();
	Q.pop();
    visit(p);
    if(p->lchild) Q.push(p->lchild);
    if(p->rchild) Q.push(p->rchild);
  }
}//LayerOrder 



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
		LayerOrder(root);
    }
    return 0;
}