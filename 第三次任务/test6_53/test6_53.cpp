#include <iostream>
#include<string.h>
#include <queue>
#include"BinTree.h"
#define ERROR 0
#define OK 1
using namespace std;

int maxh,m,n; 
void Find_h(BinTree* T,int h);
int Get_Depth(BinTree* T)//��������ȵĵݹ��㷨
{
  if(!T) return 0;
  else
  {
    m=Get_Depth(T->lchild);
    n=Get_Depth(T->rchild);
    return (m>n?m:n)+1;
  }
}

int Printpath_MaxdepthS1(BinTree* T)//����ȵ������߶ȼ�һ�����Ľ��
{
  BinTree* pathd;
  maxh=Get_Depth(T); //Get_Depth������6.44
  if(maxh<2) return ERROR; //�޷����������
  Find_h(T,1);
  return OK;
}//Printpath_MaxdepthS1 
void Find_h(BinTree* T,int h)//Ѱ�����Ϊmaxh-1�Ľ��
{
  BinTree* path[100];
  int i;
  path[h]=T;
  if(h==maxh-1)
  {
    for(i=1;path[i];i++) printf("%c",path[i]->data);
    exit; //��ӡ���·��
  }
  else
  {
    if(T->lchild) Find_h(T->lchild,h+1);
    if(T->rchild) Find_h(T->rchild,h+1);
  }
  path[h]=NULL; //����
}


int main(int argc, char *argv[])
{
    char s[100];
	//sΪ����A(B,C(D,E))
	cout<<"�빹��һ��������,����A(B,C(D,E))��"<<endl;
    while(scanf("%s",s)==1)
    {
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
		cout<<"����һ����......"<<endl;
        creatBinTree(s,root);
		display(root);
		Printpath_MaxdepthS1(root);
    }
    return 0;
}