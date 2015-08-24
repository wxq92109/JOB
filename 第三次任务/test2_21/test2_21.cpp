#include <stdio.h>
#include <stdlib.h>

typedef struct{
     int *base;
     int length;
} sqlist;

void reverseSQ(sqlist *l)
{
     int low = 0, high = l->length - 1;
     int buf, i, count = l->length / 2;
     for(i=0; i<count; i++){
     buf = l->base[low];
     l->base[low++] = l->base[high];
     l->base[high--] = buf;
     }
}

void printSQ(sqlist *l)
{
     int i = 0;
     for(i=0; i<l->length; i++)
     printf("%d ",l->base[i]);
     printf("\n");
}

int main(int argc, char *argv[])
{
     sqlist l;
     int a,i = 0;
     int cnt = 0;
     
     printf("please input count num:");
     scanf("%d",&cnt);
     l.base = (int *)malloc(sizeof(int) * cnt);
     l.length = 0;
     
     while(i < cnt){
     scanf("%d",&a);
     l.base[i++] = a;
     l.length++;
     }     
     printf("the contents of the sqlist are\n");
     printSQ(&l);
     reverseSQ(&l);
     printf("the contents of the reversed sqlist are\n");
     printSQ(&l);
     free(l.base); //ÊÍ·ÅÄÚ´æ
     return 0;
}