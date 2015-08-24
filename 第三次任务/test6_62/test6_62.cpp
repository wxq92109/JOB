#include <stdio.h>  
#include <malloc.h>
#include "CSTree.h"
int depthCSTree(CSTree T) {  //�����ֵ������ʾ����T�����
	int maxd, d;
	CSTree p;
	if(!T) return 0; //����
	else {
		for(maxd=0,p=T->firstChild; p; p=p->nextSibling)
			if((d=depthCSTree(p)) > maxd) maxd = d; //������������
			return maxd + 1;
	}
}//depthCSTree
void main() {
	CSTree csTree;
	printf("���뺢���ֵ������ʾ�����Ľ�㣺");  createCSTree(csTree);
	printf("�������Ϊ��%d\n", depthCSTree(csTree));
}
