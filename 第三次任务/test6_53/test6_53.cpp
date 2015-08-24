#include <iostream>
#include<string.h>
#include <queue>
#include"BinTree.h"
#define ERROR 0
#define OK 1
using namespace std;

int maxh,m,n; 
void Find_h(BinTree* T,int h);
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

int Printpath_MaxdepthS1(BinTree* T)//求深度等于树高度减一的最靠左的结点
{
  BinTree* pathd;
  maxh=Get_Depth(T); //Get_Depth函数见6.44
  if(maxh<2) return ERROR; //无符合条件结点
  Find_h(T,1);
  return OK;
}//Printpath_MaxdepthS1 
void Find_h(BinTree* T,int h)//寻找深度为maxh-1的结点
{
  BinTree* path[100];
  int i;
  path[h]=T;
  if(h==maxh-1)
  {
    for(i=1;path[i];i++) printf("%c",path[i]->data);
    exit; //打印输出路径
  }
  else
  {
    if(T->lchild) Find_h(T->lchild,h+1);
    if(T->rchild) Find_h(T->rchild,h+1);
  }
  path[h]=NULL; //回溯
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
		Printpath_MaxdepthS1(root);
    }
    return 0;
}