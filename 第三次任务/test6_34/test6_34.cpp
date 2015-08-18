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
	int T[]={1,1,1,2,2,3,3,4,4,5};
	int p;
    for(p=u;p!=v&&p;p=T[p]);
    if(p==v) 
		return 1;
    else
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