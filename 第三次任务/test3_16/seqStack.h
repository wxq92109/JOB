#include<malloc.h>
#include<iostream>
using namespace std;
#define TRUE        1  
#define FALSE       0  
#define OK          1  
#define ERROR       0  
#define OVERFLOW    -1  
#define UNDERFLOW   -2  
 
//定义函数返回值类型  
typedef int  Status;  
//定义顺序栈的数据元素的类型  
typedef char  ElemType;
   
//定义顺序栈的存储结构  
#define STACK_INIT_SIZE 100 //初始分配空间大小
#define INCREMENTSIZE   10 //存储空间分配增量  
struct SeqStack{  
    ElemType    *bottom;    //栈底指针  
    ElemType    *top;       //栈顶指针  
    int      size;       //栈存储空间大小  
};
Status  InitStack(SeqStack &s)  
//操作结果：构造一个空栈S  
{   
    s.bottom=(ElemType*)malloc(STACK_INIT_SIZE*sizeof(ElemType));  
    if(s.bottom == NULL){  
        cout<<"严重错误：顺序栈初始存储空间分配失败，程序退出";  
        return ERROR;
    }   
    s.top=s.bottom;
    s.size=STACK_INIT_SIZE;   
    return OK;  
}  
 
Status  DestroyStack(SeqStack &s)  
//初始条件：栈s已存在  
//操作结果：栈s已被销毁  
{  
    free(s.bottom);   
    s.bottom=s.top=NULL;  //s.bottom的值为NULL，表示顺序栈不存在   
    s.size=0;  
    return OK;  
}  
 
Status  ClearStack(SeqStack &s)  
//初始条件：栈s已存在  
//操作结果：将s清为空栈  
{   
    s.top=s.bottom;  //s.top == s.bottom作为顺序栈空的标记  
    return OK;  
}  
 
Status  StackEmpty(SeqStack s)  
//初始条件：栈s已存在  
//操作结果：若栈s为空栈，则返回TRUE，否则FALSE  
{  
    if(s.top == s.bottom)  
        return TRUE;  
    else 
        return FALSE;  
}  
 
Status StackLength(SeqStack s)  
//初始条件：栈s已存在  
//操作结果：返回s的元素个数，即栈的长度  
{  
    return s.top-s.bottom;  
}  
 
Status  Push(SeqStack &s,ElemType e)  
//初始条件：栈s已存在  
//操作结果：插入元素e成为新的栈顶元素  
{       
   if(s.top-s.bottom >= s.size ){   
        s.bottom=(ElemType*)realloc(s.bottom,(s.size+INCREMENTSIZE)*sizeof(ElemType));  
        if(s.bottom == NULL){  
            cout<<"严重错误：顺序栈增量存储空间分配失败，程序退出！";  
            exit(OVERFLOW);  
        }    
        s.top=s.bottom+s.size;   
        s.size+=INCREMENTSIZE;  
    }   
    *s.top=e;
    s.top++;  
    return OK;  
}  
 
Status  Pop(SeqStack &s,ElemType &e)  
//初始条件：栈s已存在且非空  
//操作结果：删除s的栈顶元素，并且用e返回其值  
{  
    if(StackEmpty(s) == TRUE){  
        cout<<"顺序栈为空，出栈失败！"<<endl;  
        exit(UNDERFLOW);  
    }  
    s.top--;
    e=*s.top;  
    return OK;  
}   
 
Status  GetTop(SeqStack s,ElemType &e)  
//初始条件：栈s已存在且非空  
//操作结果：用e返回s的栈顶元素  
{  
    if( StackEmpty(s) == TRUE ){  
        cout<<"访问栈顶元素发生错误：栈为空"<<endl;  
        exit(UNDERFLOW);  
    }   
    return *(s.top-1);  
}  
 
Status  StackTraverse(SeqStack s)  
//初始条件：栈s已存在且非空  
//操作结果：从栈底开始依次输出
{  
    if(s.bottom == NULL){  
        cout<<"严重错误：栈不存在，程序退出！";  
        exit(ERROR);  
    }   
    for(int i=0;i < StackLength(s);i++)   
        cout<<s.bottom[i]<<endl;    
    return OK;  
} 