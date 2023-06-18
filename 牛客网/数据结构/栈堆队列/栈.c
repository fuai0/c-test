#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100000
typedef struct stack
{
    int* data;
    int lenth;
}stack;

int main() 
{
    int x=0;
    scanf("%d",&x);
    char str[5];
    int e=0;
    stack l;
    l.data=(int*)malloc(max*sizeof(int)); 
    for(int i=0;i<x;i++)
    {
        scanf("%s %d",str,&e);
        if(strcmp("push",str)==0)
        {            

            *(l.data+l.lenth)=e;
             l.lenth++;
        }
        else if(strcmp("pop",str)==0)
        {
            if(l.lenth<=0)
            printf("error\n");
            else
            {
                printf("%d\n",*(l.data+l.lenth-1));
                l.lenth--;
            }
        }
        else if(strcmp("top",str)==0)
        {
            if(l.lenth<=0)
            printf("error\n");
            else
            {
                printf("%d\n",*(l.data+l.lenth-1));
            }
        }
    }
    return 0;
}