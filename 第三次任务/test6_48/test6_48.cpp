#include <iostream>
#include<string.h>
#include <queue>
#include"BinTree.h"
#define FALSE 0
#define TRUE 1
using namespace std;
void Findpath(BinTree* T,BinTree* p,BinTree* path[ ],int i);

void visit(BinTree* p)
{
	cout<<p->data<<endl;
}

int found=FALSE; 
BinTree* Find_Near_Ancient(BinTree* T,BinTree* p,BinTree* q)//求二叉树T中结点p和q的最近共同祖先
{
  int i;
  BinTree* pathp[ 100 ],*pathq[ 100 ]; //设立两个辅助数组暂存从根到p,q的路径
  Findpath(T,p,pathp,0);
  found=FALSE;
  Findpath(T,q,pathq,0); //求从根到p,q的路径放在pathp和pathq中
  for(i=0;pathp[i]==pathq[i]&&pathp[i];i++); //查找两条路径上最后一个相同结点
  return pathp[--i];
}//Find_Near_Ancient 
void Findpath(BinTree* T,BinTree* p,BinTree* path[ ],int i)//求从T到p路径的递归算法
{
  if(T==p)
  {
    found=TRUE;
    return; //找到
  }
  path[i]=T; //当前结点存入路径
  if(T->lchild)
	Findpath(T->lchild,p,path,i+1); //在左子树中继续寻找
  if(T->rchild&&!found) 
	  Findpath(T->rchild,p,path,i+1); //在右子树中继续寻找
  if(!found)
	  path[i]=NULL; //回溯
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
		Find_Near_Ancient(root,root->lchild,root->rchild);
    }
    return 0;
}