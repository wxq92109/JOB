#include <stdio.h>  
#include <malloc.h>
#include "CSTree.h"
int count;
int LeafCount_CSTree(CSTree T)//�����ֵ������ʾ����T��Ҷ����Ŀ
{
	CSTree child;
	if(!T->firstChild) return 1; //Ҷ�ӽ��
	else
	{
		count=0;
		for(child=T->firstChild;child;child=child->nextSibling)
			count+=LeafCount_CSTree(child);
		return count; //��������Ҷ����֮��
	}
}


void main() {
	CSTree csTree;
	printf("���뺢���ֵ������ʾ�����Ľ�㣺");  createCSTree(csTree);
	printf("���Ķ�Ϊ��%d\n", LeafCount_CSTree(csTree));
}
