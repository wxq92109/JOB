#include <IOSTREAM>
#include "PTree.h"

using namespace std;

int maxdep;
int GetDepth_PTree(PTree T)//��˫�ױ��ʾ����T�����
{
	int i,dep,j;
	maxdep=0;
	for(i=0;i<T.n;i++)
	{
		dep=0;
		for(j=i;j>=0;j=T.nodes[j].parent) dep++; //��ÿһ���������
		if(dep>maxdep) maxdep=dep;
	}
	return maxdep;
}


void main()
{
	 PTree T,p;
	 cout<<"��������ǣ�"<<GetDepth_PTree(T);
	 cout<<endl;
}