#include <stdio.h>
#include <stdlib.h>
#include"LinkBiTree.h" 
#define ERROR  0
#define OK  1
 

 BitNode *PreOrder_Next(BitNode *p)//�������������������в��ҽ��p��������,������ָ��
{
  if(p->lchild) return p->lchild;
  else return p->rchild;
}

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
	PreOrder_Next(temp->rchild);
    printf("\n");
    return 0;
}
 
