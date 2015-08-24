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
BinTree* Find_Near_Ancient(BinTree* T,BinTree* p,BinTree* q)//�������T�н��p��q�������ͬ����
{
  int i;
  BinTree* pathp[ 100 ],*pathq[ 100 ]; //�����������������ݴ�Ӹ���p,q��·��
  Findpath(T,p,pathp,0);
  found=FALSE;
  Findpath(T,q,pathq,0); //��Ӹ���p,q��·������pathp��pathq��
  for(i=0;pathp[i]==pathq[i]&&pathp[i];i++); //��������·�������һ����ͬ���
  return pathp[--i];
}//Find_Near_Ancient 
void Findpath(BinTree* T,BinTree* p,BinTree* path[ ],int i)//���T��p·���ĵݹ��㷨
{
  if(T==p)
  {
    found=TRUE;
    return; //�ҵ�
  }
  path[i]=T; //��ǰ������·��
  if(T->lchild)
	Findpath(T->lchild,p,path,i+1); //���������м���Ѱ��
  if(T->rchild&&!found) 
	  Findpath(T->rchild,p,path,i+1); //���������м���Ѱ��
  if(!found)
	  path[i]=NULL; //����
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
		Find_Near_Ancient(root,root->lchild,root->rchild);
    }
    return 0;
}