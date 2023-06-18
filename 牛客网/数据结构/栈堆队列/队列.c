#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 100000 

typedef struct
{
    int tou;
    int wei;
    int* arr;

} dui;
int main() 
{
    int n=0;
    scanf("%d",&n);
    char str[6];
    int x=0;
    dui l;
    l.tou=0;
    l.wei=0;
    l.arr=(int*)malloc(sizeof(int)*max);
    for(int i=0;i<n;i++)
    {
        scanf("%s %d",str,&x);
        if(strcmp(str,"push")==0)
        {
            l.arr[l.wei]=x;
            l.wei++;
        }
        else if(strcmp(str,"pop")==0)
        {
            if(l.tou==l.wei)
            printf("error\n");
            else
            {
                printf("%d\n",l.arr[l.tou]);
                l.tou++;
            }
        }
        else if(strcmp(str,"front")==0)
        {
            if(l.tou==l.wei)
            printf("error\n");
            else
             {
                 printf("%d\n",l.arr[l.tou]);
            }
           

        }
    }
    
    return 0;
}
