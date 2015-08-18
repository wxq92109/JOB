#include <iostream>
#include<string.h>
#include <queue>
#include"BinTree.h"
using namespace std;

void visit(BinTree* p)
{
	cout<<p->data<<endl;
}
void LayerOrder(BinTree* T)//�������������
{
  BinTree* p;
  queue<BinTree*>Q; //������������
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
	//sΪ����A(B,C(D,E))
	cout<<"�빹��һ��������,����A(B,C(D,E))��"<<endl;
    while(scanf("%s",s)==1)
    {
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
		cout<<"����һ����......"<<endl;
        creatBinTree(s,root);
		display(root);
		LayerOrder(root);
    }
    return 0;
}