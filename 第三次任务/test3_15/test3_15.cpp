#include"stack.h"
#include<iostream>
using namespace std;

void main()
{
	BDStacktype BDstack;
	Init_Stack(BDstack,100);
	//Status push(BDStacktype &tws,int i,Elemtype x)x入栈,i=0表示低端栈,i=1表示高端栈
	push(BDstack,1,24);
	//Status pop(BDStacktype &tws,int i,Elemtype &x)//x出栈,i=0表示低端栈,i=1表示高端栈
	pop(BDstack,1,24);
}