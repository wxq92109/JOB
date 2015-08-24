#include<iostream>
#include "SqList.h"
using namespace std;


int ListComp(SqList A,SqList B)//比较字符表A和B,并用返回值表示结果,值为正,表示A>B;值为负,表示A<B;值为零,表示A=B
{
	int i;
	if (A.length==0&&B.length==0)
		return 0;
    for(i=1;A.elem[i]||B.elem[i];i++)
    if(A.elem[i]!=B.elem[i]) 
		return A.elem[i]-B.elem[i];
  return 0;
}//ListComp 


void main()
{
	int flag;
	SqList A,B;
	InitList_Sq(A);
	InitList_Sq(B);
	flag = ListComp(A,B);
	if (flag < 0)
		cout<<"A < B"<<endl;
	else if(flag== 0)
		cout<<"A = B"<<endl;
	else if(flag>0)
		cout<<"A > B"<<endl;
}