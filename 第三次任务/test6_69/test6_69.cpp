#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;

void Print_BiTree(BinTree* T,int i)//����״��ӡ�����������Ԫ��,i��ʾ������ڲ��,���ε���ʱi=0
{
	int j;
	if(T->rchild) Print_BiTree(T->rchild,i+1);
	for(j=1;j<=i;j++) printf(" "); //��ӡi���ո��Ա�ʾ�����
	printf("%c\n",T->data); //��ӡTԪ��,
	if(T->lchild) Print_BiTree(T->rchild,i+1);
}
int main(int argc, char *argv[])
{
    char s[100];
	int X;
	//sΪ����A(B,C(D,E))
	cout<<"�빹��һ��������,����A(B,C)��"<<endl;
    while(scanf("%s",s)==1)
    {
        BinTree *T=(BinTree *)malloc(sizeof(BinTree));
		cout<<"����һ����......"<<endl;
        creatBinTree(s,T);
		cout<<"������״��"<<endl;
		Print_BiTree(T,0);
    }
    return 0;
}