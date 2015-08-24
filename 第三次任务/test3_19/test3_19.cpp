#include "seqStack.h"
#include <iostream>
using namespace std;


Status AllBrackets_Test(char *str)//判别表达式中三种括号是否匹配
{
  struct SeqStack s; 
  char*p,c;
  InitStack(s);
  for(p=str;*p;p++)
  {
    if(*p=='('||*p=='['||*p=='{') Push(s,*p);
    else if(*p==')'||*p==']'||*p=='}')
    {
      if(StackEmpty(s)) return 0;
      Pop(s,c);
      if(*p==')'&&c!='(') return 0;
      if(*p==']'&&c!='[') return 0;
      if(*p=='}'&&c!='{') return 0; //必须与当前栈顶括号匹配
    }
  }//for
  if(!StackEmpty(s)) return 0;
  return 1;
}


int main()   
{  
	char str[100];
	int flag;
	cout<<"请输入一串字符："<<endl;
    scanf("%s",str);
	
	flag = AllBrackets_Test(str);
	if(flag == 1)
		cout<<"匹配成功"<<endl;
	else 
		cout<<"匹配失败！"<<endl;
    return 0;   
}  