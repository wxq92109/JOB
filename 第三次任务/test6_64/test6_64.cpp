#include <IOSTREAM>
#include "PTree.h"

using namespace std;

int maxdep;
int GetDepth_PTree(PTree T)//求双亲表表示的树T的深度
{
	int i,dep,j;
	maxdep=0;
	for(i=0;i<T.n;i++)
	{
		dep=0;
		for(j=i;j>=0;j=T.nodes[j].parent) dep++; //求每一个结点的深度
		if(dep>maxdep) maxdep=dep;
	}
	return maxdep;
}


void main()
{
	 PTree T,p;
	 cout<<"树的深度是："<<GetDepth_PTree(T);
	 cout<<endl;
}