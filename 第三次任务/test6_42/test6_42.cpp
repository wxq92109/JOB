#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;
int count = 0;
int K;
void preOrder(BinTree *root)     //递归前序遍历 
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
	//s为形如A(B,C(D,E))
	cout<<"请构建一个二叉树："<<endl;
    while(scanf("%s",s)==1)
    {
		count=0;
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
        creatBinTree(s,root);
        cout<<endl;
        preOrder(root);
		cout<<"叶子数目："<<count;
    }
    return 0;
}