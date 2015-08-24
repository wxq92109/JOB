#include <stdio.h>
#include <stdlib.h>
#include"LinkBiTree.h" 
#define INFEASIBLE  0
#define OK  1
 

int Insert_BiThrTree(BiTree &T,BiTree &p,BiTree &x)//����������������T�Ľ��p�²�������x
{
  BiTree s,q;
  if(!p->ltag&&!p->rtag) 
	  return INFEASIBLE; //�޷�����
  if(p->ltag) //x��Ϊp��������
  {
    s=p->lchild; //sΪp��ǰ��
    p->ltag=Link;
    p->lchild=x;
    q=x;
    while(q->lchild) q=q->lchild;
    q->lchild=s; //�ҵ������е�������,���޸���ǰ��ָ��s
    q=x;
    while(q->rchild) q=q->rchild;
    q->rchild=p; //�ҵ������е����ҽ��,���޸���ǰ��ָ��p
  }
  else //x��Ϊp��������
  {
    s=p->rchild; //sΪp�ĺ��
    p->rtag=Link;
    p->rchild=x;
    q=x;
    while(q->rchild) q=q->rchild;
    q->rchild=s; //�ҵ������е����ҽ��,���޸���ǰ��ָ��s
    q=x;
    while(q->lchild) q=q->lchild;
    q->lchild=p; //�ҵ������е�������,���޸���ǰ��ָ��p
  }
  return OK;
}//



int main(int argc, char **argv)
{
    BiTree t;
    BiTree temp;
 
    printf("������ǰ�������������:\n");
    CreateTree(&t);                 //����������
    InOrderThread_Head(&temp, t);       //����ͷ��㣬��������
    printf("������������������:\n");
    InOrderThraverse_Thr(temp);
     
	//����Temp�Һ��ӽڵ�
	Insert_BiThrTree(t,temp,temp);
    printf("\n");
    return 0;
}
 
