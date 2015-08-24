#include<iostream>

using namespace std;


typedef struct{
                char sport[10];//项目名称
                int gender;
                char schoolname; //校名为'A','B','C','D'或'E'
                char result[10];//成绩
                int score;
              } resulttype; 
typedef struct{
                int malescore;
                int femalescore;
                int totalscore;
               } scoretype;

void summary(resulttype result[ ])//求各校的男女总分和团体总分,假设结果已经储存在result[ ]数组中
{
  scoretype score[100] ;
  int i=0;
  while(result[i].sport!=NULL)
  {
    switch(result[i].schoolname)
    {
      case 'A':
        score[0].totalscore+=result[i].score;
        if(result[i].gender==0)
			score[0].malescore+=result[i].score;
        else 
			score[ 0 ].femalescore+=result[i].score;
        break;
      case 'B':
        score[1] .totalscore+=result[i].score;
        if(result[i].gender==0) 
			score[1] .malescore+=result[i].score;
        else 
			score[1] .femalescore+=result[i].score;
        break;
      case 'C':
        score[2] .totalscore+=result[i].score;
        if(result[i].gender==0) 
			score[2] .malescore+=result[i].score;
        else 
			score[2] .femalescore+=result[i].score;
        break;
      case 'D':
        score[3] .totalscore+=result[i].score;
        if(result[i].gender==0) 
			score[3] .malescore+=result[i].score;
        else 
			score[3] .femalescore+=result[i].score;
        break;
      case 'E':
        score[4] .totalscore+=result[i].score;
        if(result[i].gender==0)
			score[4] .malescore+=result[i].score;
        else 
			score[4] .femalescore+=result[i].score;
        break;
    }
    i++;
  }
  for(i=0;i<5;i++)
  {
    printf("School %d:\n",i);
    printf("Total score of male:%d\n",score[i].malescore);
    printf("Total score of female:%d\n",score[i].femalescore);
    printf("Total score of all:%d\n\n",score[i].totalscore);
  }
}//summary 

// 数据初始化 
resulttype* initi()
{
	resulttype data[10];
	int i = 0;
	for (;i < 5;i++)
	{
		cout<<"请输入成绩信息:sport: gender: schoolname: result: score"<<endl;
		cin>>data[i].sport;
    	cin>>data[i].gender;
		cin>>data[i].schoolname;
		cin>>data[i].result;
		cin>>data[i].score;
	}
	return data;
}
void main()
{

	summary(initi());
	
}