#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;
int Get_Depth(BinTree* T);//��������ȵĵݹ��㷨;
int m = 0;
int n = 0;
int Get_Sub_Depth(BinTree *T,int x)//�����������ֵΪx�Ľ��Ϊ�����������
{
	if(T->data==x)
	{
		printf("%d\n",Get_Depth(T)); //�ҵ���ֵΪx�Ľ��,�������
		return 1;
	}
	else
	{
		if(T->lchild) 
			Get_Sub_Depth(T->lchild,x);
		if(T->rchild)
			Get_Sub_Depth(T->rchild,x); //�����������м���Ѱ��
	}
}//Get_Sub_Depth 
int Get_Depth(BinTree* T)//��������ȵĵݹ��㷨
	{
		if(!T) return 0;
		else
		{
			m=Get_Depth(T->lchild);
			n=Get_Depth(T->rchild);
			return (m>n?m:n)+1;
		}
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
        cout<<endl;
		cout<<"������Xֵ��"<<endl;
        Get_Sub_Depth(root,X);
    }
    return 0;
}