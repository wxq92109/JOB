#include <iostream>
#include<string.h>
#include<stack> 
#include"BinTree.h"
using namespace std;
void exchange(BinTree* t) //������������ 
{
	
	BinTree* p;  
	if(t->lchild)  
	{
		p=t->lchild;
		t->lchild=t->rchild;   
		t->rchild=p;    
		exchange(t->lchild);   
		exchange(t->rchild);  
	 } 
	 
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
        cout<<endl;
        exchange(root);
		display(root);
    }
    return 0;
}