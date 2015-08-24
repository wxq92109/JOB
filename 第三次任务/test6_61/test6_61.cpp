#include <stdio.h>  
#include <malloc.h>
#include "CSTree.h"
int degree;
int GetDegree_CSTree(CSTree T)//�����ֵ������ʾ����T�Ķ�
{
	CSTree p;
	if(!T->firstChild) return 0; //����
	else
	{
		int d;
		degree=0;
		for(p=T->firstChild;p;p=p->nextSibling) degree++;//�����Ķ�
		for(p=T->firstChild;p;p=p->nextSibling)
		{
			d=GetDegree_CSTree(p);
			if(d>degree) degree=d; //���ӽ��Ķȵ����ֵ
		}
		return degree;
	}//else
}

void main() {
	CSTree csTree;
	printf("���뺢���ֵ������ʾ�����Ľ�㣺");  createCSTree(csTree);
	printf("���Ķ�Ϊ��%d\n", GetDegree_CSTree(csTree));
}
