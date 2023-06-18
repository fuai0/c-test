
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 300000
typedef struct
{
    char* arr;
    int len;

} stack;
int main() 
{
    char str[max];
    scanf("%s",str);
    int sz=strlen(str);
    stack l;
    l.arr=(char*)malloc(max*sizeof(char));
    l.len=0;
    for(int i=0;i<sz;i++)
    {
        if(l.len==0)
        {
             l.arr[l.len]=str[i];
             l.len++;
        }
        else
        {
            l.arr[l.len]=str[i];
            if(l.arr[l.len-1]==l.arr[l.len])
            {
                l.len--;
            }
            else 
            {
                l.len++;
            }
        }
        
    }
    if(l.len!=0)
    {
        for(int i=0;i<l.len;i++)
        {
             printf("%c",l.arr[i]);
        }
    }
    else 
    {
        printf("0");
    }
    return 0;
}
