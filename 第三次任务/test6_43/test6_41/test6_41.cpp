#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;
int count = 0;
int K;
void preOrder(BinTree *root)     //�ݹ�ǰ����� 
{
	if(count==K)
	{
		cout<<"��K��ֵ�ǣ�";
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
	//sΪ����A(B,C(D,E))
	cout<<"�빹��һ����������"<<endl;
    while(scanf("%s",s)==1)
    {
		cout<<"������Kֵ��"<<endl;
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