#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;

void Print_BiTree(BinTree* T,int i)//按树状打印输出二叉树的元素,i表示结点所在层次,初次调用时i=0
{
	int j;
	if(T->rchild) Print_BiTree(T->rchild,i+1);
	for(j=1;j<=i;j++) printf(" "); //打印i个空格以表示出层次
	printf("%c\n",T->data); //打印T元素,
	if(T->lchild) Print_BiTree(T->rchild,i+1);
}
int main(int argc, char *argv[])
{
    char s[100];
	int X;
	//s为形如A(B,C(D,E))
	cout<<"请构建一个二叉树,形如A(B,C)："<<endl;
    while(scanf("%s",s)==1)
    {
        BinTree *T=(BinTree *)malloc(sizeof(BinTree));
		cout<<"创建一个树......"<<endl;
        creatBinTree(s,T);
		cout<<"树的形状："<<endl;
		Print_BiTree(T,0);
    }
    return 0;
}