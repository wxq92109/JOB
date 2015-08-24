#include <stdio.h>  
#include <malloc.h>
#include "CSTree.h"
int count;
int CreateCSTree_Degree(char node[ ],int degree[ ])//由结点的层序序列和各结点的度构造树的孩子兄弟链表
{
	CSNode* ptr[100]; 
	int i,k,d,j;
	CSNode * ptrd; //树结点指针的辅助存储
	ptr[0]=(CSNode*)malloc(sizeof(CSNode));
	 i=0;k=1; //i为当前结点序号,k为当前孩子的序号
	while(node[i])
	{
		ptr[i]->data=node[i];
		d=degree[i];
		if(d)
		{
			ptr[k++]=(CSNode*)malloc(sizeof(CSNode)); //k为当前孩子的序号
			ptr[i]->firstChild=ptr[k]; //建立i与第一个孩子k之间的联系
			for(j=2;j<=d;j++)
			{
				ptr[k++]=(CSNode*)malloc(sizeof(CSNode));
				ptr[k-1]->nextSibling=ptr[k]; //当结点的度大于1时,为其孩子建立兄弟链表
				
			}//for
		}//if
		printf("ptr[%d]=%c\n",i,node[i]);
		i++;
	}//while
	printf("构造树的孩子兄弟链表成功！\n");
	return i;
}



void main() {
	CSTree csTree;
	char node[100]={'A','B','C','D','E','F'};
	int degree[100]={2,2,1,0,0,0};
	CreateCSTree_Degree(node,degree);
}
