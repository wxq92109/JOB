#include<iostream>
typedef int Status;
#define OK 1
#define ERROR 0

using namespace std;

Status F_recursive(int n,int &s)//递归算法
{
  if(n<0) return ERROR;
  if(n==0) s=n+1;
  else
  {
    F_recursive(n/2,s);
    s=n*s;
	cout<<s<<" ";
  }
  return OK;
}//F_recursive 
 

int main()
{

	int n,s;
	cout<<"请输入n值"<<endl;
	cin>>n;
	cout<<"S的递归值： ";
	F_recursive(n,s);
	cout<<endl;

}