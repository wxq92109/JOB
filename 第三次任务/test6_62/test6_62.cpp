#include <stdio.h>  
#include <malloc.h>
#include "CSTree.h"
int depthCSTree(CSTree T) {  //求孩子兄弟链表表示的树T的深度
	int maxd, d;
	CSTree p;
	if(!T) return 0; //空树
	else {
		for(maxd=0,p=T->firstChild; p; p=p->nextSibling)
			if((d=depthCSTree(p)) > maxd) maxd = d; //子树的最大深度
			return maxd + 1;
	}
}//depthCSTree
void main() {
	CSTree csTree;
	printf("输入孩子兄弟链表表示的树的结点：");  createCSTree(csTree);
	printf("数的深度为：%d\n", depthCSTree(csTree));
}
