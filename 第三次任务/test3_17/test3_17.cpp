#include "seqStack.h"
#include <iostream>
using namespace std;


int IsReverse()//判断输入的字符串中'&'前和'&'后部分是否为逆串,是则返回1,否则返回0
{
  char e,c;
  struct SeqStack s;   
  InitStack(s);
  while((e=getchar())!='&')
    Push(s,e);
  while((e=getchar())!='@')
  {
    if(StackEmpty(s))
		return 0;
    Pop(s,c);
    if(e!=c) 
		return 0;
  }
  if(!StackEmpty(s))
	  return 0;
  return 1;
}



int main()   
{   
     int flag = -1;
    flag = IsReverse();
	if(flag==1)
		cout<<"'&'前和'&'后部分是逆串"<<endl;
	else
		cout<<"'&'前和'&'后部分不是逆串"<<endl;
    return 0;   
}  