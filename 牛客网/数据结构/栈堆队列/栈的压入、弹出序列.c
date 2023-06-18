/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param pushV int整型一维数组 
 * @param pushVLen int pushV数组长度
 * @param popV int整型一维数组 
 * @param popVLen int popV数组长度
 * @return bool布尔型
 */
 #include <stdlib.h>
 #include <stdio.h>
 #define max 1001
typedef struct{
    int* data;
    int lenth;
}stack;
bool IsPopOrder(int* pushV, int pushVLen, int* popV, int popVLen ) 
{
    int* arr1=pushV;
    int* arr2=popV;
    if(pushVLen!=popVLen)
    return false;
    int len = pushVLen;
    for(int w=0;w<len;w++)//判断两数组中值是否相同
    {
        for(int j=0;;j++)
        {
            if(arr1[w]==arr2[j])
            {
                break;
            }
            if(j==len)
            return false;

        }
    }
    stack l;
    l.data=(int*)malloc(sizeof(int)*max);
    l.lenth=1;
    int i=0;
    int w=0;
    l.data[l.lenth]=arr1[w];
    while(i!=len)
    {
       
        if(l.data[l.lenth]!=arr2[i])
        {   
            l.lenth++;
            w++;
            l.data[l.lenth]=arr1[w];
            if(l.data[l.lenth]!=arr2[i])
           {

           }
          else 
           {
            l.lenth--;
                i++;
           }
        }
        else 
        {
            i++;
            l.lenth--;
        }
        if(w>=len)
              return false;
    }
    free(l.data);
    l.data=NULL;
    return true;








    // write code here
}