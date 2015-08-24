#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;

void Bitree_Copy_Nonrecursive(BinTree* T,BinTree* &U)//�ǵݹ鸴�ƶ�����
{
  stack<BinTree*> S1;
  stack<BinTree*> S2;
  BinTree* q,*p;
  S1.push(T); //��ָ���ջ
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
    } //�����ߵ���ͷ
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
     S1.push(p->rchild); //����һ��
     S2.push(q);
    }
  }//while
}



int main(int argc, char *argv[])
{
    char s[100];
	//sΪ����A(B,C(D,E))
	cout<<"�빹��һ��������,����A(B,C(D,E))��"<<endl;
    while(scanf("%s",s)==1)
    {
		BinTree *copyRoot;
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
		cout<<"����һ����......"<<endl;
        creatBinTree(s,root);
		display(root);
        Bitree_Copy_Nonrecursive(root,copyRoot);
		cout<<"Copy�γɵ�����"<<endl;
		display(copyRoot);
    }
    return 0;
}