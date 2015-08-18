#include <iostream>
#include<string.h>
#include <queue>
#include"BinTree.h"
#define FALSE 0
#define TRUE 1
using namespace std;

int IsComplete_Bitree(BinTree* T)//�ж϶������Ƿ���ȫ������,���򷵻�1,���򷵻�0
{
  int flag;
  BinTree*p;
  queue<BinTree*>Q;
  flag=0;
  Q.push(T); //������������
  while(!Q.empty())
  {
    Q.pop();
    if(!p) flag=1;
    else if(flag) return 0;
    else
    {
		Q.push(p->lchild);
        Q.push(p->rchild); //���ܺ����Ƿ�Ϊ��,�������
    }
  }//while
  return 1;
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
		IsComplete_Bitree(root);
    }
    return 0;
}