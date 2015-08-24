#include<iostream>
#include <math.h>
typedef int Status;
#define OK 1
#define ERROR 0
//  此算法有问题
using namespace std;

float Sqrt_recursive(float A,float p,float e)//求平方根的递归算法
{
  if(abs(p^2-A)<=e) 
	  return p;
  else 
	  return sqrt_recursive(A,(p+A/p)/2,e);
}//Sqrt_recurve 
float Sqrt_nonrecursive(float A,float p,float e)//求平方根的非递归算法
{
  while(abs(p^2-A)>=e)
    p=(p+A/p)/2;
  return p;
}


int main()
{

	float A,p,e;
	cout<<"请输入A值"<<endl;
	cin>>A;
	cout<<"请输入A的近似平方根P值： ";
	cin>>p;
	cout<<"请输入允许误差e值： ";
	cin>>e;
	Sqrt_recursive(A,p,e);
	cout<<endl;

}