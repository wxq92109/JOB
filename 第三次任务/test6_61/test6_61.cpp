#include <stdio.h>  
#include <malloc.h>
#include "CSTree.h"
int degree;
int GetDegree_CSTree(CSTree T)//求孩子兄弟链表表示的树T的度
{
	CSTree p;
	if(!T->firstChild) return 0; //空树
	else
	{
		int d;
		degree=0;
		for(p=T->firstChild;p;p=p->nextSibling) degree++;//本结点的度
		for(p=T->firstChild;p;p=p->nextSibling)
		{
			d=GetDegree_CSTree(p);
			if(d>degree) degree=d; //孩子结点的度的最大值
		}
		return degree;
	}//else
}

void main() {
	CSTree csTree;
	printf("输入孩子兄弟链表表示的树的结点：");  createCSTree(csTree);
	printf("树的度为：%d\n", GetDegree_CSTree(csTree));
}
