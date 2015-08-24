#include <stdio.h>
#include <stdlib.h>
#include"LinkBiTree.h" 
#define INFEASIBLE  0
#define OK  1
 

int Insert_BiThrTree(BiTree &T,BiTree &p,BiTree &x)//在中序线索二叉树T的结点p下插入子树x
{
  BiTree s,q;
  if(!p->ltag&&!p->rtag) 
	  return INFEASIBLE; //无法插入
  if(p->ltag) //x作为p的左子树
  {
    s=p->lchild; //s为p的前驱
    p->ltag=Link;
    p->lchild=x;
    q=x;
    while(q->lchild) q=q->lchild;
    q->lchild=s; //找到子树中的最左结点,并修改其前驱指向s
    q=x;
    while(q->rchild) q=q->rchild;
    q->rchild=p; //找到子树中的最右结点,并修改其前驱指向p
  }
  else //x作为p的右子树
  {
    s=p->rchild; //s为p的后继
    p->rtag=Link;
    p->rchild=x;
    q=x;
    while(q->rchild) q=q->rchild;
    q->rchild=s; //找到子树中的最右结点,并修改其前驱指向s
    q=x;
    while(q->lchild) q=q->lchild;
    q->lchild=p; //找到子树中的最左结点,并修改其前驱指向p
  }
  return OK;
}//



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
	Insert_BiThrTree(t,temp,temp);
    printf("\n");
    return 0;
}
 
