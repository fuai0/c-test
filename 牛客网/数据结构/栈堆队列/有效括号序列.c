/**
 * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
 *
 * 
 * @param s string�ַ��� 
 * @return bool������
 */
 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>
 #define max 10000
typedef struct
{
 char* arr;
 int len;
}stack;

bool isValid(char* s ) {
    stack l;
    l.arr=(char*)malloc(max*sizeof(char));
    l.len=0;
    
    
    
    int sz=strlen(s);
    
    l.arr[l.len]=s[0];
    l.len++;
    for(int i=1;i<sz;i++)
    {
        l.arr[l.len]=s[i];
        if(l.len==0)
        {
             l.arr[l.len]=s[i];
             l.len++;
        }
        else if(l.arr[l.len-1]=='(')
        {
            if(l.arr[l.len]==')')
            l.len--;
            else
             l.len++;
        }
        else if(l.arr[l.len-1]=='{')
        {
            if(l.arr[l.len]=='}')
            l.len--;
            else
             l.len++;
        }
        else if(l.arr[l.len-1]=='[')
        {
            if(l.arr[l.len]==']')
              l.len--;
            else
             l.len++;
        }
        
    }
    if(l.len==0)
    return true;
    else
    return false;
    // write code here
}