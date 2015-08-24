//-----------------����ͼ���ڽӶ��ر�洢��ʾ------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define OVERFLOW -2
#define MAX_VERTEX_NUM 20
typedef char InfoType;
typedef char VertexType[MAX_VERTEX_NUM];
typedef enum{unvisited, visited}VisitIf;
typedef struct EBox
{
	VisitIf mark;  //���ʱ��
	int ivex, jvex;  //�ñ����������������λ��
	struct EBox *ilink, *jlink;  //�ֱ�ָ�������������������һ����
	InfoType *info;  //�ñ���Ϣָ��
}EBox;//�߽��

typedef struct VexBox
{
	VertexType data;
	EBox *firstedge;  //ָ���һ�������ö���ı�
}VexBox;  //������

typedef struct  
{
	VexBox adjmulist[MAX_VERTEX_NUM];  
	int vexnum, edgenum;  //����ͼ�ĵ�ǰ�������ͱ���
}AMLGraph;  //ͼ

int LocateVex(AMLGraph &G, VertexType v)
{
	for(int i=0; i < G.vexnum; ++i)
	{
		if(strcmp(G.adjmulist[i].data, v) == 0)
			return i;
	}
	return -1;
}

void CreateUDG(AMLGraph &G)
{
	//�����ڽӶ��ر�洢��ʾ����������ͼG
	printf("\n��������ͼ...\n\n");
	printf("������ͼ�Ķ�����������:");
	scanf("%d%d",&G.vexnum, &G.edgenum);
	int k,i,j;
	printf("������%d�������ֵ��֮���ÿո����:\n",G.vexnum);
	for(k=0; k < G.vexnum; ++k)
	{
		getchar();
		scanf("%s",G.adjmulist[k].data);
		G.adjmulist[k].firstedge = NULL;
	}
	printf("������%d�����������Ķ��㣬��ʽ(V1 V2<Enter>):\n",G.edgenum);
	VertexType v1,v2;
	EBox *p;
	for(k=0; k < G.edgenum; ++k)
	{
		getchar();
		scanf("%s%s",v1,v2);
		i = LocateVex(G,v1);
		j = LocateVex(G,v2);
		if(i<0 || j < 0)
			exit(OVERFLOW);
		p = (EBox *)malloc(sizeof(EBox));
		if(!p)
			exit(OVERFLOW);
		p->ivex = i;  //�Ա߽�㿪ʼ��ֵ(mark,ivex,jvex,ilink,jlink,info)
		p->jvex = j;
		p->ilink = G.adjmulist[i].firstedge;  
		p->jlink = G.adjmulist[j].firstedge;
		p->info = NULL;
		p->mark = unvisited;
		G.adjmulist[i].firstedge = G.adjmulist[j].firstedge = p; //����ָ�����һ�������ı�

	}
	printf("��ϲ�������ɹ�!\n");
}

void DisplayEdge(AMLGraph G)
{
	//�������
	int k;
	EBox *p;
	for(k=0; k < G.vexnum; ++k)
	{
		p = G.adjmulist[k].firstedge;
		while(p)
		{
			if(p->mark == unvisited)
			{
				printf("(%s,%s) ",G.adjmulist[p->ivex].data, G.adjmulist[p->jvex].data);
				p->mark = visited;
			}
			p=p->ilink;
		}
	}
	printf("\n");

	for(k=0; k < G.vexnum; ++k)  //�����ʱ�־������Ϊδ���ʵ�
	{
		p = G.adjmulist[k].firstedge;
		while(p)
		{
			if(p->mark == visited)
			{
				p->mark = unvisited;
			}
			p=p->ilink;
		}
	}
}


