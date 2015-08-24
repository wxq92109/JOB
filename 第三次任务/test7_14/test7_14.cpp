#include<iostream>  
#include<stdlib.h>  
using namespace std;  
#define MAX_VERTEX_NUM 50//����ͼ����󶥵���  
typedef char VertexData;//�����������ַ��͡�  
typedef struct EdgeNode//����  
{  
    int adjvex;//�ڽӵ���  
    VertexData data;  
    EdgeNode *next;//��������Ӧ����һ������  
} EdgeNode;  
typedef struct VertexNode//ͷ���  
{  
    VertexData data;  
    EdgeNode *firstedge;//ͷ�������Ӧ�ĵ�һ������  
}VertexNode;  
typedef struct AdjList//ͼ�����ݽṹ  
{  
    int VexNum,ArcNum;//����ͼ�Ķ������ͱ���  
    VertexNode vertex[MAX_VERTEX_NUM];//����ͷ������顣  
}AdjList;  
void CreateGraph(AdjList *adj)  
{  
    int s,d;  
    int i;  
    cout<<"���붥�����ͱ���"<<endl;  
    cin>>adj->VexNum>>adj->ArcNum;//����ͼ�Ķ������ͱ�����  
    EdgeNode *q=NULL;//�������  
    //��ʼ����ͷ���  
    cout<<"����"<<adj->VexNum<<"��ͷ��������"<<endl;  
    for(i=1;i<=adj->VexNum;i++)  
    {  
        //adj->vertex[i]��ͷ�������  
        cin>>adj->vertex[i].data;//�������ƣ���һ���ַ�  
        adj->vertex[i].firstedge=NULL;//��ʼ״̬��ͷ�����治�����㣬���firstedge=null  
    }  
    //�ڳ�ʼ��ͷ����Ժ󣬾���Ҫ��ʼ��������ӵ�ͷ������ȥ��  
    cout<<"����"<<adj->ArcNum<<"���ߵ������յ�"<<endl;  
    for(i=1;i<=adj->ArcNum;i++)  
    {  
        cin>>s>>d;//����ߵ���ʼ����ֹ����ʼs����ͷ���λ�ã���ֹd���Ǳ���λ��  
        q=(EdgeNode *)malloc(sizeof(EdgeNode));//����һ�����㣬Ϊ�����ռ�  
        if(q==NULL)  
            return;  
        /* 
        ���ԭ����������s->a->b-c>������Ҫ����һ������q����ô�����Ժ�ͱ����s->q->a->b->c 
        ��ˣ� 
        1.q��ָ���Ӧ���ǵ�ǰs��ָ���Ԫ�ء� 
        2.q���ڽӵ�����d 
        3.s��ָ��ָ��q 
        �������������д��� 
        */  
        q->adjvex=d;//������ڽӵ�����d  
        q->next=adj->vertex[s].firstedge;//�¼���Ľڵ㶼����ͷ���֮��ԭ����ͷ���֮��Ľڵ�Ҫ���ơ�  
        adj->vertex[s].firstedge=q;  
    }  
}  
void DisplayGraph(AdjList *adj)  
{  
    int n=adj->VexNum;//�������������Ҫ����ÿһ�����  
    EdgeNode *q=NULL;  
    int i;  
    for( i=1;i<=adj->VexNum;i++)  
    {  
    //  cout<<n<<endl;  
        q=adj->vertex[i].firstedge;//qΪͷ���i��ָ��ı��㣬i->q֮����ڱ�  
        if(q==NULL)//��ʾͷ������û�и��������  
        {  
            cout<<"û�ô�"<<adj->vertex[i].data<<"�����Ľڵ�"<<endl;  
        }  
        else  
        {  
            cout<<"�ӽ��"<<adj->vertex[i].data<<"�����ı���"<<endl;  
            while(q!=NULL)  
            {  
            //  cout<<adj->vertex[i].data<<"->"<<q->data<<endl;  
                cout<<adj->vertex[i].data<<"->"<<adj->vertex[q->adjvex].data<<endl;  
                q=q->next;//����������  
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