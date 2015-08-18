#include<iostream>
#include"SqList.h"

using namespace std;

void SqList_Intersect_True(Sqlist &A,Sqlist B)//求元素递增排列的线性表A和B的元素的交集并存回A中
{
  int i,j,k;
  i=1;j=1;k=0;
  while(A.elem[i]&&B.elem[j])
  {
    if(A.elem[i]<B.elem[j]) i++;
    else if(A.elem[i]>B.elem[j]) j++;
    else if(A.elem[i]!=A.elem[k])
    {
      A.elem[++k]=A.elem[i]; //当发现了一个在A,B中都存在的元素
      i++;j++; //且C中没有,就添加到C中
    }
  }//while
  while(A.elem[k]) A.elem[k++]=0;
}




void main()
{
	Sqlist A,B;
	Sqlist L;
	int j,e;
	printf("请定义表长和元素：");
	Initlist(A);
	Initlist(B);
	Creatlist(A);
	Creatlist(B);
	SqList_Intersect_True(A,B);

}