#include<iostream>

using namespace std;

int g(int m,int n,int &s)//求递归函数g的值s
{
  if(m==0&&n>=0)
	  s=0;
  else if(m>0&&n>=0)
  {
	  s=n+g(m-1,2*n,s);
	  cout<<s<<" ";
  }
  else 
	  return 0;
  return 1;
}//g 

int main()
{

	int m,n,s;
	cout<<"请输入m、n值"<<endl;
	cin>>m;
	cin>>n;
	cout<<"S的递归值： ";
	g(m,n,s);
	cout<<endl;

}