#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;
int count = 0;
int K;
void preOrder(BinTree *root)     //�ݹ�ǰ����� 
{

    if(root!=NULL)
    {
		if(root->lchild==NULL&&root->rchild==NULL)
			++count;
        preOrder(root->lchild);
        preOrder(root->rchild);
		
    }
}



int main(int argc, char *argv[])
{
    char s[100];
	//sΪ����A(B,C(D,E))
	cout<<"�빹��һ����������"<<endl;
    while(scanf("%s",s)==1)
    {
		count=0;
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
        creatBinTree(s,root);
        cout<<endl;
        preOrder(root);
		cout<<"Ҷ����Ŀ��"<<count;
    }
    return 0;
}