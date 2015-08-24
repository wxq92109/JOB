#include<iostream>  
#include<stdlib.h>  
using namespace std;  
#define MAX_VERTEX_NUM 50//定义图的最大顶点数  
typedef char VertexData;//顶点名称是字符型。  
typedef struct EdgeNode//表结点  
{  
    int adjvex;//邻接点域  
    VertexData data;  
    EdgeNode *next;//表结点所对应的下一个表结点  
} EdgeNode;  
typedef struct VertexNode//头结点  
{  
    VertexData data;  
    EdgeNode *firstedge;//头结点所对应的第一个表结点  
}VertexNode;  
typedef struct AdjList//图的数据结构  
{  
    int VexNum,ArcNum;//定义图的顶点数和边数  
    VertexNode vertex[MAX_VERTEX_NUM];//定义头结点数组。  
}AdjList;  
void CreateGraph(AdjList *adj)  
{  
    int s,d;  
    int i;  
    cout<<"输入顶点数和边数"<<endl;  
    cin>>adj->VexNum>>adj->ArcNum;//输入图的顶点数和边数。  
    EdgeNode *q=NULL;//定义表结点  
    //初始化表头结点  
    cout<<"输入"<<adj->VexNum<<"个头结点的名称"<<endl;  
    for(i=1;i<=adj->VexNum;i++)  
    {  
        //adj->vertex[i]是头结点数组  
        cin>>adj->vertex[i].data;//顶点名称，是一个字符  
        adj->vertex[i].firstedge=NULL;//初始状态下头结点后面不跟表结点，因此firstedge=null  
    }  
    //在初始化头结点以后，就需要开始将表结点添加到头结点后面去。  
    cout<<"输入"<<adj->ArcNum<<"条边的起点和终点"<<endl;  
    for(i=1;i<=adj->ArcNum;i++)  
    {  
        cin>>s>>d;//输入边的起始和终止，起始s就是头结点位置，终止d就是表结点位置  
        q=(EdgeNode *)malloc(sizeof(EdgeNode));//创建一个表结点，为其分配空间  
        if(q==NULL)  
            return;  
        /* 
        如果原来的链表是s->a->b-c>，现在要加入一个表结点q，那么加入以后就变成了s->q->a->b->c 
        因此： 
        1.q所指向的应该是当前s所指向的元素。 
        2.q的邻接点域是d 
        3.s的指针指向q 
        操作如以下三行代码 
        */  
        q->adjvex=d;//表结点的邻接点域是d  
        q->next=adj->vertex[s].firstedge;//新加入的节点都是在头结点之后，原来在头结点之后的节点要后移。  
        adj->vertex[s].firstedge=q;  
    }  
}  
void DisplayGraph(AdjList *adj)  
{  
    int n=adj->VexNum;//顶点个数，后面要遍历每一个点点  
    EdgeNode *q=NULL;  
    int i;  
    for( i=1;i<=adj->VexNum;i++)  
    {  
    //  cout<<n<<endl;  
        q=adj->vertex[i].firstedge;//q为头结点i所指向的表结点，i->q之间存在边  
        if(q==NULL)//表示头结点后面没有跟其他结点  
        {  
            cout<<"没用从"<<adj->vertex[i].data<<"出发的节点"<<endl;  
        }  
        else  
        {  
            cout<<"从结点"<<adj->vertex[i].data<<"出发的边有"<<endl;  
            while(q!=NULL)  
            {  
            //  cout<<adj->vertex[i].data<<"->"<<q->data<<endl;  
                cout<<adj->vertex[i].data<<"->"<<adj->vertex[q->adjvex].data<<endl;  
                q=q->next;//链表往后跳  
            }  
        }  
    }  
}

  
void main()  
{  
    int n;  
    AdjList *adj=(AdjList *)malloc(sizeof(AdjList));  
    CreateGraph(adj);  
    DisplayGraph(adj);  
    system("pause");  
}  