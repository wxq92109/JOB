#include <iostream>
#include<string.h>
#include<stack> 
using namespace std;

typedef struct node
{
    char data;
    struct node *lchild,*rchild;
}BinTree;

typedef struct node1
{
    BinTree *btnode;
    bool isFirst;
}BTNode;


void creatBinTree(char *s,BinTree *&root)  //������������sΪ����A(B,C(D,E))��ʽ���ַ��� 
{
    int i;
    bool isRight=false;
    stack<BinTree*> s1;          //��Ž�� 
    stack<char> s2;              //��ŷָ���
    BinTree *p,*temp;
    root->data=s[0];
    root->lchild=NULL;
    root->rchild=NULL;
    s1.push(root);
    i=1;
    while(i<strlen(s))
    {
        if(s[i]=='(')
        {
            s2.push(s[i]);
            isRight=false;
        }    
        else if(s[i]==',')    
        {
            isRight=true;
        }
        else if(s[i]==')')
        {
            s1.pop();
            s2.pop();
        }
        else if(isalpha(s[i]))
        {
            p=(BinTree *)malloc(sizeof(BinTree));
            p->data=s[i];
            p->lchild=NULL;
            p->rchild=NULL;
            temp=s1.top();
            if(isRight==true)    
            {
                temp->rchild=p;
                cout<<temp->data<<"���Һ�����"<<s[i]<<endl;
            }
            else
            {
                temp->lchild=p;
                cout<<temp->data<<"��������"<<s[i]<<endl;
            }
            if(s[i+1]=='(')
                s1.push(p);
        }
        i++;
    }    
}
//Print_BiTree

void display(BinTree *root)        //��ʾ���νṹ 
{
    if(root!=NULL)
    {
        cout<<root->data;
        if(root->lchild!=NULL)
        {
            cout<<'(';
            display(root->lchild);
        }
        if(root->rchild!=NULL)
        {
            cout<<',';
            display(root->rchild);
            cout<<')';
        }
    }
}



void inOrder1(BinTree *root)      //�ݹ��������
{
    if(root!=NULL)
    {
        inOrder1(root->lchild);
        cout<<root->data<<" ";
        inOrder1(root->rchild);
    }
} 

void postOrder1(BinTree *root)    //�ݹ�������
{
    if(root!=NULL)
    {
        postOrder1(root->lchild);
        postOrder1(root->rchild);
        cout<<root->data<<" ";
    }    
} 

void preOrder2(BinTree *root)     //�ǵݹ�ǰ����� 
{
    stack<BinTree*> s;
    BinTree *p=root;
    while(p!=NULL||!s.empty())
    {
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            s.push(p);
            p=p->lchild;
        }
        if(!s.empty())
        {
            p=s.top();
            s.pop();
            p=p->rchild;
        }
    }
}

void inOrder2(BinTree *root)      //�ǵݹ��������
{
    stack<BinTree*> s;
    BinTree *p=root;
    while(p!=NULL||!s.empty())
    {
        while(p!=NULL)
        {
            s.push(p);
            p=p->lchild;
        }
        if(!s.empty())
        {
            p=s.top();
            cout<<p->data<<" ";
            s.pop();
            p=p->rchild;
        }
    }    
} 

void postOrder2(BinTree *root)    //�ǵݹ�������
{
    stack<BTNode*> s;
    BinTree *p=root;
    BTNode *temp;
    while(p!=NULL||!s.empty())
    {
        while(p!=NULL)              //��������һֱ����������ֱ������û���������Ľ�� 
         {
            BTNode *btn=(BTNode *)malloc(sizeof(BTNode));
            btn->btnode=p;
            btn->isFirst=true;
            s.push(btn);
            p=p->lchild;
        }
        if(!s.empty())
        {
            temp=s.top();
            s.pop();
            if(temp->isFirst==true)     //��ʾ�ǵ�һ�γ�����ջ�� 
             {
                temp->isFirst=false;
                s.push(temp);
                p=temp->btnode->rchild;    
            }
            else                        //�ڶ��γ�����ջ�� 
             {
                cout<<temp->btnode->data<<" ";
                p=NULL;
            }
        }
    }    
} 

void postOrder3(BinTree *root)     //�ǵݹ�������
{
    stack<BinTree*> s;
    BinTree *cur;                      //��ǰ��� 
    BinTree *pre=NULL;                 //ǰһ�η��ʵĽ�� 
    s.push(root);
    while(!s.empty())
    {
        cur=s.top();
        if((cur->lchild==NULL&&cur->rchild==NULL)||
           (pre!=NULL&&(pre==cur->lchild||pre==cur->rchild)))
        {
            cout<<cur->data<<" ";  //�����ǰ���û�к��ӽ����ߺ��ӽڵ㶼�ѱ����ʹ� 
              s.pop();
            pre=cur; 
        }
        else
        {
            if(cur->rchild!=NULL)
                s.push(cur->rchild);
            if(cur->lchild!=NULL)    
                s.push(cur->lchild);
        }
    }    
}
