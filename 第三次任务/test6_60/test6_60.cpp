#include <stdio.h>  
#include <malloc.h>
#include "CSTree.h"
int count;
int LeafCount_CSTree(CSTree T)//求孩子兄弟链表表示的树T的叶子数目
{
	CSTree child;
	if(!T->firstChild) return 1; //叶子结点
	else
	{
		count=0;
		for(child=T->firstChild;child;child=child->nextSibling)
			count+=LeafCount_CSTree(child);
		return count; //各子树的叶子数之和
	}
}


void main() {
	CSTree csTree;
	printf("输入孩子兄弟链表表示的树的结点：");  createCSTree(csTree);
	printf("树的度为：%d\n", LeafCount_CSTree(csTree));
}
