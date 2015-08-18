#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;
int count = 0;
int K;
void preOrder(BinTree *root)     //递归前序遍历 
{
	if(count==K)
	{
		cout<<"第K个值是：";
		cout<<root->data;
		return;
	}
    if(root!=NULL)
    {
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
		cout<<"请输入K值："<<endl;
		cin>>K;
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
        creatBinTree(s,root);
        cout<<endl;
        preOrder(root);
        cout<<endl;
		count=0;
    }
    return 0;
}