#include <stdio.h>  
#include <malloc.h>
#include "CSTree.h"
int count;
int CreateCSTree_Degree(char node[ ],int degree[ ])//�ɽ��Ĳ������к͸����Ķȹ������ĺ����ֵ�����
{
	CSNode* ptr[100]; 
	int i,k,d,j;
	CSNode * ptrd; //�����ָ��ĸ����洢
	ptr[0]=(CSNode*)malloc(sizeof(CSNode));
	 i=0;k=1; //iΪ��ǰ������,kΪ��ǰ���ӵ����
	while(node[i])
	{
		ptr[i]->data=node[i];
		d=degree[i];
		if(d)
		{
			ptr[k++]=(CSNode*)malloc(sizeof(CSNode)); //kΪ��ǰ���ӵ����
			ptr[i]->firstChild=ptr[k]; //����i���һ������k֮�����ϵ
			for(j=2;j<=d;j++)
			{
				ptr[k++]=(CSNode*)malloc(sizeof(CSNode));
				ptr[k-1]->nextSibling=ptr[k]; //�����Ķȴ���1ʱ,Ϊ�亢�ӽ����ֵ�����
				
			}//for
		}//if
		printf("ptr[%d]=%c\n",i,node[i]);
		i++;
	}//while
	printf("�������ĺ����ֵ�����ɹ���\n");
	return i;
}



void main() {
	CSTree csTree;
	char node[100]={'A','B','C','D','E','F'};
	int degree[100]={2,2,1,0,0,0};
	CreateCSTree_Degree(node,degree);
}
