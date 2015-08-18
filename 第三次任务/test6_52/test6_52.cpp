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

	思路：对树进行层次遍历，并记录每一层的节点数目保存在一个数组中，
	从数组中取出每个层节点数乘以当前层数即可得到他的繁茂度。
	
	*/
  return 1;
}

int main(int argc, char *argv[])
{
    char s[100];
	//s为形如A(B,C(D,E))
	cout<<"请构建一个二叉树,形如A(B,C(D,E))："<<endl;
    while(scanf("%s",s)==1)
    {
        BinTree *root=(BinTree *)malloc(sizeof(BinTree));
		cout<<"创建一个树......"<<endl;
        creatBinTree(s,root);
		display(root);
		LusDegrees(root);
    }
    return 0;
}