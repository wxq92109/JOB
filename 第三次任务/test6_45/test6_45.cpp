#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;

void Del_Sub(BinTree* T)//ɾ������T
{
  if(T->lchild) Del_Sub(T->lchild);
  if(T->rchild) Del_Sub(T->rchild);
  free(T);
}

void Del_Sub_x(BinTree* T,int x)//ɾ��������Ԫ��xΪ��������
{
  if(T->data==x) Del_Sub(T); //ɾ��������
  else
  {
    if(T->lchild) 
		Del_Sub_x(T->lchild,x);
    if(T->rchild)
		Del_Sub_x(T->rchild,x); //�����������м�������
  }//else
}


int main(int argc, char *argv[])
{
    char s[100];
	int X;
	//sΪ����A(B,C(D,E))
	cout<<"�빹��һ��������,����A(B,C(D,E))��"<<endl;
    while(scanf("%s",s)==1)
    {
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
		cout<<"����һ����......"<<endl;
        creatBinTree(s,root);
		display(root);
        cout<<"������X��ֵ��"<<endl;
		cin>>X;
		Del_Sub_x(root,X);
		display(root);
    }
    return 0;
}