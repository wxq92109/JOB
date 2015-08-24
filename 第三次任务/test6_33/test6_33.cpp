#include<iostream>

using namespace std;

int Is_Descendant_C(int u,int v)//在孩子存储结构上判断u是否v的子孙,是则返回1,否则返回0
{
/*
	          1
		2          3
	4     5    6       7
  8   9 10
	
*/
	int L[]={1,1,1,1,1,0,0,0,0,0};
	int R[]={1,1,1,1,0,0,0,0,0,0};
  if(u==v) return 1;
  else
  {
    if(L[v])
      if (Is_Descendant_C(u,L[v])) return 1;
    if(R[v])
      if (Is_Descendant_C(u,R[v])) return 1; //这是个递归算法
  }
  return 0;
}

void main()
{

	int u,v,flag;
	cout<<"请分别输入U，V值 "<<endl;
	cin>>u;
	cin>>v;
	flag = Is_Descendant_C(u,v);
	if(flag==1)
		cout<<"u是v的子孙"<<endl;
	else
		cout<<"u不是v的子孙"<<endl;
}