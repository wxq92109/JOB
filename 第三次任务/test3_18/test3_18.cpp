#include "seqStack.h"
#include <iostream>
using namespace std;




Status Bracket_Test(char *str)//判别表达式中小括号是否匹配
{
  int count=0;
  char*p;
  for(p=str;*p;p++)
  {
    if(*p=='(') count++;
    else if(*p==')') count--;
    if (count<0) return 0;
  }
  if(count) 
	  return 0; //注意括号不匹配的两种情况
  return 1;
}//Bracket_Test 

int main()   
{  
	char str[100];
	int flag;
	cout<<"请输入一串字符："<<endl;
    scanf("%s",str);
	flag = Bracket_Test(str);
	if(flag == 1)
		cout<<"匹配成功"<<endl;
	else 
		cout<<"匹配失败！"<<endl;
    return 0;   
}  