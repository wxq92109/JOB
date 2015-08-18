#include<iostream>
#include"bTree.h"
using namespace std;
//判断两棵树是否相似的递归算法
int Bitree_Sim(BiTree B1,BiTree B2)
{
  if(!B1&&!B2) return 1;
  else if(B1&&B2&&Bitree_Sim(B1->lchild,B2->lchild)&&Bitree_Sim(B1->rchild,B2->rchild))
    return 1;
  else 
	  return 0;
}//Bitree_Sim 


void main(){
    BiTree T;
    T = CreateBiTree();//建立
    PreOrderTraverse(T);//输出
   
}

