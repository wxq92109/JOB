#include<iostream>

using namespace std;

 int ferb(int k,int m,int f)//求k阶斐波那契序列的第m项的值f
{
  int temp[100],i,sum,j;
  if(k<2||m<0) 
	  return 0;
  if(m<k-1) f=0;
  else if (m==k-1) f=1;
  else
  {
    for(i=0;i<=k-2;i++) 
		temp[i]=0;
    temp[k-1]=1; //初始化
    for(i=k;i<=m;i++) //求出序列第k至第m个元素的值
    {
      sum=0;
      for(j=i-k;j<i;j++) 
		  sum+=temp[j];
      temp[i]=sum;
    }
    f=temp[m];
  }
  cout<<"k阶斐波那契序列的第m项的值f是："<<f<<endl;
  return 1;
}


void main()
{

	int k,m,f;
	cout<<"请输入阶数K值："<<endl;
	cin>>k;
	cout<<"请输入第几项m值："<<endl;
	cin>>m;
	ferb(k,m,f);
	
}