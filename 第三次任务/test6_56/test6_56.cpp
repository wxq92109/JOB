#include <stdio.h>
#include <stdlib.h>
#include"LinkBiTree.h" 
#define ERROR  0
#define OK  1
 

 BitNode *PreOrder_Next(BitNode *p)//在先序后继线索二叉树中查找结点p的先序后继,并返回指针
{
  if(p->lchild) return p->lchild;
  else return p->rchild;
}

int main(int argc, char **argv)
{
    BiTree t;
    BiTree temp;
 
    printf("请输入前序二叉树的内容:\n");
    CreateTree(&t);                 //建立二叉树
    InOrderThread_Head(&temp, t);       //加入头结点，并线索化
    printf("输出中序二叉树的内容:\n");
    InOrderThraverse_Thr(temp);
     
	//查找Temp右孩子节点
	PreOrder_Next(temp->rchild);
    printf("\n");
    return 0;
}
 
