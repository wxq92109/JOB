#include <iostream>
#include<string.h>
#include <queue>
#include"BinTree.h"
#define FALSE 0
#define TRUE 1
using namespace std;

int LusDegrees(BinTree* T)//
{
  /*

	˼·���������в�α���������¼ÿһ��Ľڵ���Ŀ������һ�������У�
	��������ȡ��ÿ����ڵ������Ե�ǰ�������ɵõ����ķ�ï�ȡ�
	
	*/
  return 1;
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
		LusDegrees(root);
    }
    return 0;
}