#include<iostream>  
#include "Graph.h"
#include<stdlib.h>  
#define ERROR 0
#define INFEASIBLE -1
#define OK 1
using namespace std;  
 
int Insert_Vex(AdjList* G, char v)//在邻接矩阵表示的图G上插入顶点v
{
	if((G->VexNum+1)>MAX_VERTEX_NUM )
		return INFEASIBLE;
	EdgeNode* q=(EdgeNode *)malloc(sizeof(EdgeNode));
	q->data = v;
	VertexNode vn;
	vn.firstedge = q;
	G->vertex[++G->VexNum]=vn;
	return OK;
}


int Delete_Arc(AdjList &G,char v,char w)//在邻接矩阵表示的图G上删除边(v,w)
{

	return OK;
}
Insert_Arc(AdjList &G,char v,char w)//在邻接矩阵表示的图G上插入边
{

	return OK;
}
void main()  
{  
    int n;  
	char v;
    AdjList *adj=(AdjList *)malloc(sizeof(AdjList));  
    CreateGraph(adj);  
    DisplayGraph(adj);  
	cout<<"请输入要添加的节点值："<<endl;
	cin>>v;
	Insert_Vex(adj,v);
      
}  