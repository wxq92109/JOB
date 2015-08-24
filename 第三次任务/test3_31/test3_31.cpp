#include<iostream>
#include"test3_31.h"
#include"seqStack.h"
#define ERROR 0
#define OK 1
using namespace std;

int Palindrome_Test()//判别输入的字符串是否回文序列,是则返回1,否则返回0
{
  SeqStack S;
  char a,c,b;
  circlQueue Q;
  InitStack(S);
  initQueue_C(Q);
  while((c=getchar())!='@')
  {
    Push(S,c);enterQueue_C(Q,c); //同时使用栈和队列两种结构
  }
  while(!StackEmpty(S))
  {
    Pop(S,a);
	b = outputQueue_C(Q);
    if(a!=b) return ERROR;
  }
  return OK;
}//Palindrome_Test 

void main()
{
	int flag = -1;
	flag = Palindrome_Test();

	if(flag ==  1)
		cout<<"是回文序列"<<endl;
	else
		cout<<"不是回文序列"<<endl;
}