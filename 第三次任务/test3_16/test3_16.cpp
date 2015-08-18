#include "seqStack.h"
#include <iostream>
using namespace std;


void Train_arrange(char *train,SeqStack s)//这里用字符串train表示火车,'H'表示硬席,'S'表示软席
{
	char *p,*q,c,*ini;
	
  p=train;q=train;
  ini = p;
  while(*p)
  {
    if(*p=='H') 
		Push(s,*p); //把'H'存入栈中
    else 
		*(q++)=*p; //把'S'调到前部
    p++;
  }
  while(!StackEmpty(s))
  {
    Pop(s,c);
    *(q++)=c; //把'H'接在后部
  }
  cout<<"已经把'S'调到前部:"<<endl;
  while(*ini)
  {
	  cout<<*(ini++);
  }
  cout<<endl;


}


int main()   
{   
    struct SeqStack s;   
    InitStack(s);     
    ElemType train[10];   
    for(int i=0;i<10;i++){   
		if(i%2==0)
			train[i]='S';
		else 
			train[i]='H';
    }       
	Train_arrange(train,s);
    return 0;   
}  