#include<iostream>
#include"SqList.h"

using namespace std;

void SqList_Intersect(Sqlist A,Sqlist B,Sqlist &C)//求元素递增排列的线性表A和B的元素的交集并存入C中
{
  int i,j,k;
  i=1;j=1;k=0;
  while(A.elem[i]&&B.elem[j])
  {
    if(A.elem[i]<B.elem[j]) i++;
    if(A.elem[i]>B.elem[j]) j++;
    if(A.elem[i]==B.elem[j])
    {
      C.elem[++k]=A.elem[i]; //当发现了一个在A,B中都存在的元素,
      i++;j++; //就添加到C中
    }
  }//while
}



void main()
{
	Sqlist A,B,C;
	Sqlist L;
	int j,e;
	printf("请定义表长和元素：");
	Initlist(A);
	Initlist(B);
	Creatlist(A);
	Creatlist(B);
	SqList_Intersect(A,B,C);

}