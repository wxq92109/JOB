#include<iostream>
#include"SqList.h"

using namespace std;

void SqList_Intersect_Delete(Sqlist &A,Sqlist B,Sqlist C) 
{
	int i,j,k,m,same;
  i=0;j=0;k=0;m=0;	//i指示A中元素原来的位置,m为移动后的位置
  while(i<A.length&&j<B.length&& k<C.length) 
  {
    if(B.elem[j]<C.elem[k]) j++;
    else if(B.elem[j]>C.elem[k]) k++;
    else
    {
      same=B.elem[j];			//找到了相同元素same
      while(B.elem[j]==same) j++;
      while(C.elem[k]==same) k++;	//j,k后移到新的元素
      while(i<A.length&&A.elem[i]<same) 
        A.elem[m++]=A.elem[i++];		//需保留的元素移动到新位置
      while(i<A.length&&A.elem[i]==same) i++;	//跳过相同的元素
    }
  }//while
  while(i<A.length) 
    A.elem[m++]=A.elem[i++];	//A的剩余元素重新存储。
  A.length=m; 
}





void main()
{
	Sqlist A,B,C;
	Sqlist L;
	int j,e;
	printf("请定义A表长和元素：");
	Initlist(A);
	Creatlist(A);
	printf("请定义B表长和元素：");
	Initlist(B);
	Creatlist(B);
	SqList_Intersect_Delete(A,B,C);

}